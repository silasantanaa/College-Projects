#include <iostream>

#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	float saldo;
	
	cout << "Informe seu saldo m�dio R$";
	cin >> saldo;
	
	if (saldo >400) {
		cout << "Seu saldo m�dio � R$" << saldo << "\nValor do cr�dito R$" << saldo*0.30;
	}
	else if (saldo >300){
		cout << "Seu saldo m�dio � R$" << saldo << "\nValor do cr�dito R$" << saldo*0.25;
	}
	else if (saldo >200){
		cout << "Seu saldo m�dio � R$" << saldo << "\nValor do cr�dito R$" << saldo*0.20;
	}
	else {
		cout << "Seu saldo m�dio � R$" << saldo << "\nValor do cr�dito R$" << saldo*0.10;
	}
}
