#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL, "");
	
	float salario, comissao;
	
	cout << "Digite o valor do seu salário fixo: ";
	cin >> salario;
	
	cout << "Informe o valor total da sua venda: ";
	cin >> comissao;
	
	cout << "O valor salário final é: " << "R$" << (salario + (comissao * 1.04));
	
}
