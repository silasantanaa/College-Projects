#include <iostream>
using namespace std;

int main () {
	
	int datanasc, anoatual, soma;
	
	cout << "Informe ano de nascimento: ";
	cin >> datanasc;
	
	cout << "Informe o ano atual: ";
	cin >> anoatual;
	
	soma = anoatual-datanasc;
	
	cout << "a idade em anos: " << soma << "\n";
	
	cout << "a idade em meses: " << soma*12 << "\n";
	
	cout << "a idade em dias: " << soma*365 << "\n";
	
	cout << "a idade em semanas: " << soma*52.143 << "\n";
	
	
	
	
}
