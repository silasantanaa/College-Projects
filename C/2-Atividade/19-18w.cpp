#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

int main (){
	
	setlocale(LC_ALL, "");
	
	float largura, comprimento, area;
	
	cout << "Insira o comprimento em (m): ";
	cin >> comprimento;
	
	cout << "Insira a largura em (m): ";
	cin >> largura;
	
	area = largura * comprimento;
	
	cout << "Área do cômodo: " << area << "m2.\n";
	cout << "Potência necessária para iluminação do ambiente: " << area*18 << "W";
	
	
	
	
}
