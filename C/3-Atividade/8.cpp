#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	float precoFabrica, distribuidor, imposto, precoCliente;
	
	cout << "Digite o valor de fábrica do carro R$";
	cin >> precoFabrica;
	
	if (precoFabrica <=12000){
		cout << "Custo de fábrica até R$12 mil. " << "5% do distribuidor." << " isento do imposto.\n";
		 distribuidor = precoFabrica*0.05;
		 imposto = 0;	
	}
	else if (precoFabrica<=25000) {
		cout << "Custo de fábrica entre R$ 12 mil e R$ 25 mil." << " 10% do distribuidor." << "\n15% do imposto.\n";
		distribuidor = precoFabrica*0.10;
		imposto = precoFabrica*0.15;
	}
	else {
		cout << "Custo de fábrica acima de R$ 25 mil. " << "15% do distribuidor." << " 20% do imposto.\n";
		distribuidor = precoFabrica*0.15;
		imposto = precoFabrica*0.20;
	}
	precoCliente = precoFabrica+distribuidor+imposto;
	
	cout << "Preço de venda ao cliente R$" << precoCliente;
	
}
	
