//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int opcao;
	cout << "############### Menu de Opções ###############" << endl;
	while(1){
		cout << "1. Novo Salário\t";
	    cout << "2. Férias\t";
	    cout << "3. Décimo\t";
	    cout << "4. Sair\t";
	    cin >> opcao;
		if(opcao==1){
			float salario=0, soma=0;
			cout << "Digite seu salário R$:";
			cin >> salario;
			soma = (soma+salario);
			if(salario <=210)
				cout << "Seu novo salário R$:" << soma*1.15 << endl;
				else if (salario <=600)
				cout << "Seu novo salário R$:" << soma*1.10 << endl;
				else{
					cout << "Seu novo salário R$:" << soma*1.05 << endl;
				}
		}
		else if (opcao==2){
			float salario=0, soma=0;
			cout << "Digite seu salário R$:";
			cin >> salario;
			soma = (soma+salario)/3;
			cout << "Seu novo salário R$:" << salario+soma << endl;
		}
		else if (opcao==3){
			float salario=0, soma=0;
			int mes=0;
			cout << "Digite seu salário R$:";
			cin >> salario;
			cout << "Digite os meses de trabalho:";
			cin >> mes;
			if (mes <=12){
				soma = (salario*mes)/12;
			    cout << "Seu Décimo Terceiro R$:" << soma << endl;
			}
			else{
				cout << "Mês Inválido!" << endl;
			}
		}
		else if (opcao==4){
			cout << "Saindo do programa em 3" << endl;
			cout << "Saindo do programa em 2" << endl;
			cout << "Saindo do programa em 1" << endl;
			return 0;
		}
		else{
			cout << "Opção Inválida!!" << endl;
		}
}
}
