#include <iostream>
#include <locale>
using namespace std;

int main() {
	
	setlocale(LC_ALL,"");
	
	float num1, num2;
	int op;
	
	cout << "Informe o 1º número: ";
	cin >> num1;
	
	cout << "Informe o 2º número: ";
	cin >> num2;
	
	cout << "\nEscolha uma opção:\n";
	cout << "1 - Média dos números\n";
	cout << "2 - Diferença dos números\n";
	cout << "3 - Produto dos números\n";
	cout << "4 - Divisão do primeiro pelo segundo\n";
	cin >> op;
	
	switch (op) {
		
		case 1:
			cout << "Média dos números = " << (num1+num2)/2;
			break;
			case 2:
			cout << " Diferença dos números = " << (num1-num2);
			break;
			case 3:
			cout << " Produto dos números = " << (num1*num2);
			break;
			case 4:
				if (num2 != 0)
				cout << " Divisão dos números = " << (num1/num2);
				else
				cout << "Não é possível dividir por zero";
				break;
				default:
					cout << "Opção iválida.";
	
	}

	
}
