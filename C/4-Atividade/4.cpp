#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");

    float salario , aumento , imposto ;

cout << "Informe seu salário atual: R$";
cin >> salario ;

if ( salario <= 350) {
cout << "Terá gratificação de: R$100. ";
aumento = 100;
 } 
 else if ( salario < 600) {
cout << "Terá gratificação de: R$75. ";
aumento = 75;
} 
else if ( salario <= 900) {
cout << "Terá gratificação de: R$50. ";
aumento = 50;
} 
else {
cout << "Terá gratificação de: R$35. ";
aumento = 35;
}

imposto = salario * 0.07;

cout << "\nSalário atualizado: R$" << salario + aumento - imposto ;

}
