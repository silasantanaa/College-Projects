#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	float number1, number2, number3;
	
	cout << "Informe o 1º número: ";
	cin >> number1;
	
	cout << "Informe o 2º número: ";
	cin >> number2;
	
	cout << "informe o 3º número: ";
	cin >> number3;
	
	if (number1>number2){
		
		cout << "O 1º número é maior: ";
	}
	else if (number2>number3){
		
		cout << "O 2º número é maior: ";
	}
	else {
		
		cout << "O 3º número é maior: ";
	}

}
