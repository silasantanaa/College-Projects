#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	float precoFabrica, distribuidor, imposto, precoCliente;
	
	cout << "Digite o valor de f�brica do carro R$";
	cin >> precoFabrica;
	
	if (precoFabrica <=12000){
		cout << "Custo de f�brica at� R$12 mil. " << "5% do distribuidor." << " isento do imposto.\n";
		 distribuidor = precoFabrica*0.05;
		 imposto = 0;	
	}
	else if (precoFabrica<=25000) {
		cout << "Custo de f�brica entre R$ 12 mil e R$ 25 mil." << " 10% do distribuidor." << "\n15% do imposto.\n";
		distribuidor = precoFabrica*0.10;
		imposto = precoFabrica*0.15;
	}
	else {
		cout << "Custo de f�brica acima de R$ 25 mil. " << "15% do distribuidor." << " 20% do imposto.\n";
		distribuidor = precoFabrica*0.15;
		imposto = precoFabrica*0.20;
	}
	precoCliente = precoFabrica+distribuidor+imposto;
	
	cout << "Pre�o de venda ao cliente R$" << precoCliente;
	
}
	
