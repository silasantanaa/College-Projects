#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	float salario, reajuste;
	
	cout << "Informe o seu Sal�rio R$";
	cin >> salario;
	
	if (salario <=500){
		
		cout << "Voc� recebeu aumento de 30%" << "\nSeu Sal�rio com reajuste � R$" << salario*1.30;
	}
	else{
		cout << "Voc� n�o tem direito ao aumento!";
	}
}
