//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int idade, cont=0;
	float soma=0, media=0;
	
	while (idade !=0){
		cout << "Digite sua idade ou digite 0 para finalizar:";
        cin >> idade;
		if(idade > 0){
			soma+=idade;
			cont = cont + 1;
	 }	
	}
	cout << "A média das idades inseridas:" << soma/cont;
}
