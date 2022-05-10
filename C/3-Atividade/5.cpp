#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	float salario, reajuste;
	
	cout << "Informe o seu Salário R$";
	cin >> salario;
	
	if (salario <=500){
		
		cout << "Você recebeu aumento de 30%" << "\nSeu Salário com reajuste é R$" << salario*1.30;
	}
	else{
		cout << "Você não tem direito ao aumento!";
	}
}
