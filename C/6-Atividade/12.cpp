//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int cod, tipo;
	while(1){
		cout << "Digite seu código:";
		cin >> cod;
		if(cod <=0){
			cout << "Leitura encerrada!";
			return 0;
		}
		cout << "##### Tipo de investimento #####" << endl;
		cout << "1- Poupança/Rendimento mensal 1,5%" << endl;;
		cout << "2- Poupança plus/Rendimento mensal 2%" << endl;
		cout << "3- Fundos de renda fixa/Rendimento mensal 4%" << endl;
		cin >> tipo;
		if(tipo==1){
			float valor=0, soma=0;
			cout << "Digite o valor a ser investido R$:";
			cin >> valor;
			cout << "Total investido R$:" << valor << endl;
			soma = (soma+valor)*0.015;
			cout << "Total de juros R$" << soma << endl;
		}
		else if (tipo==2){
			float valor=0, soma=0;
			cout << "Digite o valor a ser investido R$:";
			cin >> valor;
			cout << "Total investido R$:" << valor << endl;
			soma = (soma+valor)*0.02;
			cout << "Total de juros R$" << soma << endl;
		}
		else if (tipo==3){
			float valor=0, soma=0;
			cout << "Digite o valor a ser investido R$:";
			cin >> valor;
			cout << "Total investido R$:" << valor << endl;
			soma = (soma+valor)*0.04;
			cout << "Total de juros R$:" << soma << endl;
		}
		else{
			cout << "Tipo Inválido!" << endl;
		}
	}
}
