#include <iostream>
#include <math.h>
using namespace std;

int main () {
	
	float salario, conta1, conta2, atraso1, atraso2, rest;
	
	cout << "Digite seu salario: " << endl;
	cin >> salario;
	
	cout << "Digite sua primeira conta: " << endl;
	cin >> conta1;
	
	cout << "Digite sua segunda conta: " << endl;
	cin >> conta2;
	
	
	atraso1 = (conta1*atraso1)/100;
	atraso2 = (conta2*atraso2)/100;
	
	rest = (conta1+atraso1) + (conta2+atraso2);
	
	cout << "O resto do seu salario e: " << rest-salario;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
