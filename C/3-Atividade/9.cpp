#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	float poupanca, valor, renda;
	
	cout << "Digite (1) para investir na Poupança" << " rendimento mensal 3%:\n" <<
	"Digite (2) para investir Fundos de Renda Fixa" << " rendimento mensal 4%:";
	cin >> poupanca;
	
	cout << "Digite o valor do seu investimento R$";
	cin >> valor;
	
	if (poupanca == 1) {
		renda = valor*1.03;
	}
	else {
		renda = valor*1.04;
	}
	cout << "Valor do investimento R$" << renda;
	


}
