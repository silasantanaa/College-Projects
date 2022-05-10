//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	
	setlocale(LC_ALL,"");
	int idade;
	float peso, altura;
	float qtdpeso=0, qtdpessoa=0;
	float mediapessoa=0;
	float cont=0;
	float id1=0;
	
	for(int i=0; i <10; i++){
		cout << "Digite sua idade:";
		cin >> idade;
		id1++;
		cont = cont+idade;
		cout << "Digite seu peso:";
		cin >> peso;
		cout << "Digite sua altura:";
		cin >> altura;
		cout << endl;
		if((peso > 90) and (altura < 1.50)){
			qtdpeso++;
		}
		if((idade >=10) and (idade <=30) and (altura > 1.90)){
			qtdpessoa++;
		}
		
	}
	
	mediapessoa = cont/10;	
	
	    cout << "A média das idades das dez pessoas:" << mediapessoa << endl;
		cout << "Quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro:" << qtdpeso << endl;
		cout << "Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m:" << (qtdpessoa/10)*100 << "%";
	
}
