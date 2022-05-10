//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL, "");
	
	float valor=5, quantidade=120, despesa=200, lucro;
	
	for(valor=5; valor >=1; valor = valor - 0.5){
		
		lucro = (valor*quantidade) - despesa;
		cout << "\n" "Quantidade:" << quantidade << "\t" << "Valor R$:" << valor << "\t" << "Lucro R$:" << lucro;
		quantidade = quantidade +26;
	}
	
	
}
