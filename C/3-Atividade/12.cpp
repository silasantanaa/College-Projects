#include <iostream>
using namespace std;

int main () {
	
	int idade;
	
	cout << "Informe sua idade:";
	cin >> idade;
	
	if (idade >=18){
		
		cout << "Maioridade";
	}
	else {
		cout << "Menoridade";
	}
}
