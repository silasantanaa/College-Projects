#include <iostream>
using namespace std;

int main () {
	
	float altura, peso;
	char sexo;
	
	cout << " Informe sua altura em metros : ";
	cin >> altura;
	
	cout << " Informe seu sexo (H ou M): ";
	cin >> sexo;
	
	if ( sexo == 'H'){
		peso = (72.7 * altura ) - 58;
	}
	else{
		peso = (62.1 * altura ) - 44.7;
	}
	
	cout << " Peso ideal : " << peso;
	
}
