#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

int main () {
	
	float raio;
	setlocale(LC_ALL, "");
	
	cout << "Informe o raio ";
	cin >> raio;
	
	cout << "Comprimento da esfera: " << (2 * M_PI * raio);
	cout << "\nÁrea da esfera: " << (M_PI * pow(raio, 2));
	cout << "\nVolume da esfera: " << ((3 * M_PI * pow(raio, 3))/4);
	
	
}
