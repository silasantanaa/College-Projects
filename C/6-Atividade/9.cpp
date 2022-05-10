//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int idade;
	float altura=0, media=0, soma=0, i=0;
	
	while(1){
		cout << "Digite sua idade:";
		cin >> idade;
		if (idade <=0) break;
		cout << "Digite sua altura:";
		cin >> altura;
		if (idade > 50){
			i++;
			soma = (soma + altura);
		}
		else {	
		}
        media = (soma/i);
	}
	cout << "Média das alturas com mais de 50 anos:" << media;
}
