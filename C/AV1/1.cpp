//AV1 Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	float n1, n2;
	char magica;
	
	cout << "Digite seu 1º número: ";
	cin >> n1;
	
	cout << "Digite seu 2º número: ";
	cin >> n2;
	
	cout << "\nEscolha sua operação:\n";
	cout << "+ --> para somar\n";
	cout << "- --> para subtrair\n";
	cout << "* --> para multiplicar\n";
	cout << "/ --> para divisão\n";
	cin >> magica;
	
	switch (magica){
		
		case '+':
			cout << "Soma dos números = " << n1+n2;
			break;
			case '-':
				cout << "Subtração dos números = " << n1-n2;
				break;
				case '*':
					cout << "Multriplicação dos números = " << n1*n2;
					break;
					case '/':
						if (n2 != 0)
							cout << "Divisão dos números = " << n1/n2;
						else
						cout << "Impossível dividir por zero.";
						break;
						default:
							cout << "Opção inválida.";
								
	}
		
}
