#include <iostream>
#include <locale>
using namespace std;

int main() {
	
	setlocale(LC_ALL,"");
	
	float num1, num2;
	int op;
	
	cout << "Informe o 1� n�mero: ";
	cin >> num1;
	
	cout << "Informe o 2� n�mero: ";
	cin >> num2;
	
	cout << "\nEscolha uma op��o:\n";
	cout << "1 - M�dia dos n�meros\n";
	cout << "2 - Diferen�a dos n�meros\n";
	cout << "3 - Produto dos n�meros\n";
	cout << "4 - Divis�o do primeiro pelo segundo\n";
	cin >> op;
	
	switch (op) {
		
		case 1:
			cout << "M�dia dos n�meros = " << (num1+num2)/2;
			break;
			case 2:
			cout << " Diferen�a dos n�meros = " << (num1-num2);
			break;
			case 3:
			cout << " Produto dos n�meros = " << (num1*num2);
			break;
			case 4:
				if (num2 != 0)
				cout << " Divis�o dos n�meros = " << (num1/num2);
				else
				cout << "N�o � poss�vel dividir por zero";
				break;
				default:
					cout << "Op��o iv�lida.";
	
	}

	
}
