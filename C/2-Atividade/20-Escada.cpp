#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL, "");
	float angulo, radiano, distancia, hipotenusa;

	cout << "Informe o �ngulo da escada em graus: ";
	cin >> angulo;
	
	cout << "Informe a dist�ncia da escada: ";
	cin >> distancia;
	
	radiano = angulo * (M_PI / 180);
	hipotenusa = distancia / cos(radiano);
	
	cout << "Tamanho da escada: " << hipotenusa;

	
}
