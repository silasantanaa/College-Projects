//AV1 Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	float n1, n2;
	char magica;
	
	cout << "Digite seu 1� n�mero: ";
	cin >> n1;
	
	cout << "Digite seu 2� n�mero: ";
	cin >> n2;
	
	cout << "\nEscolha sua opera��o:\n";
	cout << "+ --> para somar\n";
	cout << "- --> para subtrair\n";
	cout << "* --> para multiplicar\n";
	cout << "/ --> para divis�o\n";
	cin >> magica;
	
	switch (magica){
		
		case '+':
			cout << "Soma dos n�meros = " << n1+n2;
			break;
			case '-':
				cout << "Subtra��o dos n�meros = " << n1-n2;
				break;
				case '*':
					cout << "Multriplica��o dos n�meros = " << n1*n2;
					break;
					case '/':
						if (n2 != 0)
							cout << "Divis�o dos n�meros = " << n1/n2;
						else
						cout << "Imposs�vel dividir por zero.";
						break;
						default:
							cout << "Op��o inv�lida.";
								
	}
		
}
