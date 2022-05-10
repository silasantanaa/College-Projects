//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale (LC_ALL,"");
	int idade, id1=0;
	float altura, alt1=0, peso, ps=0, total=0;
	
	for(int i=0; i < 5; i++){
		
		cout << i+1 << "º" << "Digite sua idade:";
		cin >> idade;
		cout << i+1 << "º" << "Digite sua altura:";
		cin >> altura;
		cout << i+1 << "º" << "Digite seu peso:";
		cin >> peso;
		
		if(idade > 50){
		id1++;
		}
		if (idade =10 and idade <=20){
		alt1++;
		total = total+altura;
        }
        if(peso < 40){
        ps++;
	}
	}
	cout << "Quantidade de pessoas com idade superior a 50 anos:" << id1 << endl;
	cout << "Média das alturas das pessoas com idade entre 10 e 20 anos:" << total/alt1 << endl;
	cout << "Porcentagem de pessoas com peso inferior a 40 kg:" << (ps/5)*100 << "%";
}


