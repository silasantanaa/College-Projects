#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

int main () {
	
	setlocale(LC_ALL, "");
	float hr_trabalhada, valor_salario, hr_extra, valor_hora, salario_bruto, valor_extra;
	
	cout << "Digite valor do salário minímo: R$";
	cin >> valor_salario;
	
	cout << "Digite horas trabalhada: ";
	cin >> hr_trabalhada;
	
	cout << "Digite horas extra trabalhada: ";
	cin >> hr_extra;
	
	valor_hora = valor_salario / 8;
	valor_extra = valor_salario / 4;
	salario_bruto = hr_trabalhada * valor_hora;
	valor_extra = valor_extra * hr_extra;
	
	cout << "Salário a receber: R$" << salario_bruto + valor_extra;
	
}
