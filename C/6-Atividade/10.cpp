//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int opcao;
	cout << "############### Menu de Op��es ###############" << endl;
	while(1){
		cout << "1. Novo Sal�rio\t";
	    cout << "2. F�rias\t";
	    cout << "3. D�cimo\t";
	    cout << "4. Sair\t";
	    cin >> opcao;
		if(opcao==1){
			float salario=0, soma=0;
			cout << "Digite seu sal�rio R$:";
			cin >> salario;
			soma = (soma+salario);
			if(salario <=210)
				cout << "Seu novo sal�rio R$:" << soma*1.15 << endl;
				else if (salario <=600)
				cout << "Seu novo sal�rio R$:" << soma*1.10 << endl;
				else{
					cout << "Seu novo sal�rio R$:" << soma*1.05 << endl;
				}
		}
		else if (opcao==2){
			float salario=0, soma=0;
			cout << "Digite seu sal�rio R$:";
			cin >> salario;
			soma = (soma+salario)/3;
			cout << "Seu novo sal�rio R$:" << salario+soma << endl;
		}
		else if (opcao==3){
			float salario=0, soma=0;
			int mes=0;
			cout << "Digite seu sal�rio R$:";
			cin >> salario;
			cout << "Digite os meses de trabalho:";
			cin >> mes;
			if (mes <=12){
				soma = (salario*mes)/12;
			    cout << "Seu D�cimo Terceiro R$:" << soma << endl;
			}
			else{
				cout << "M�s Inv�lido!" << endl;
			}
		}
		else if (opcao==4){
			cout << "Saindo do programa em 3" << endl;
			cout << "Saindo do programa em 2" << endl;
			cout << "Saindo do programa em 1" << endl;
			return 0;
		}
		else{
			cout << "Op��o Inv�lida!!" << endl;
		}
}
}
