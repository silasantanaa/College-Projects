#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	float salario;
	
	cout << "Informe seu Salário R$";
	cin >> salario;
	
	if (salario <=300){
		
		cout << "Você recebeu aumento de 35% " << "R$" << salario*1.35;
	}
	else if (salario >300){
		
		cout << "Você Recebeu aumento de 15% " << "R$" << salario*1.15;	
	}
		
}
	
	
