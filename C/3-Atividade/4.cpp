#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	float number1, number2, number3;
	
	cout << "Informe o 1� n�mero: ";
	cin >> number1;
	
	cout << "Informe o 2� n�mero: ";
	cin >> number2;
	
	cout << "informe o 3� n�mero: ";
	cin >> number3;
	
	if (number1>number2){
		
		cout << "O 1� n�mero � maior: ";
	}
	else if (number2>number3){
		
		cout << "O 2� n�mero � maior: ";
	}
	else {
		
		cout << "O 3� n�mero � maior: ";
	}

}
