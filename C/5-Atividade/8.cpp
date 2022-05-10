//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale (LC_ALL,"");
	int idade, id1=0, cor_olho1=0, cor_cabelo1=0;
	float peso, altura, alt1=0, media_total=0, media_cor_olho=0, total=0;
	char cor_olho, cor_cabelo;
	
	for(int i = 0; i < 6; i++){
		
		cout << "Digite a sua idade:";
		cin >> idade;
		
		cout << "Digite o seu peso:";
		cin >> peso;

		cout << "Digite a sua altura:";
		cin >> altura;
		
		cout << "Digite a cor dos olhos" << endl;
		cout << "A - azul; P- preto; V - verde; e C - castanho:";
		cin >> cor_olho;
		
		cout << "Digite a cor dos cabelos" << endl;
		cout << "P - preto; C - castanho; L - louro; e R - ruivo:";
		cin >> cor_cabelo;
		
		if(idade > 50 and peso < 60){
			id1++;
		}
		if(altura < 1.50){
			alt1++;
			total = total+idade;
		}
		if(cor_olho == 'A'){
			cor_olho1++;
		}
		if(cor_cabelo == 'R' and cor_olho != 'A'){
			cor_cabelo1++;
		}
		
		media_cor_olho= (cor_olho1/6)*100;
	}
	
	cout << "Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg:" << id1 << endl;
	cout << "Média das idades das pessoas com altura inferior a 1,50 m;" << total/alt1 << endl;
	cout << "Porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas:" << media_cor_olho << "%" << endl;
	cout << "Quantidade de pessoas ruivas e que não possuem olhos azuis" << cor_cabelo1 << endl;

}
