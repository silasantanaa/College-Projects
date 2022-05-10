#include <iostream>
#include <math.h>
using namespace std;

int main () {
	
	int idade;
	
	cout << "Digite Sua Idade: ";
	cin >> idade;
	
	if (idade <=16)
	cout << "Nao Votante.";
	
	else
	
	if (idade >=18 and idade <70)
	cout << "Eleitor Obrigatorio.";
	
	else 
	
	if (idade >=16 and idade <18 or idade>=70)
	cout << "eleitor facultativo";
	
}
