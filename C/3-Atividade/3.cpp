#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL, "");
	float number1, number2;
	
	cout << "Informe o primeiro número ";
	cin >> number1;
	
	cout << "Informe o segundo número ";
	cin >> number2;
	
	if (number1 < number2){
		
		cout << number1 << " menor que " << number2;
	}
	else {
		
		cout << number2 << " menor ou igual  " << number1;
	}
	
}
	
	
	
