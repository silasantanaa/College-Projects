#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");

    float salario , aumento , imposto ;

cout << "Informe seu sal�rio atual: R$";
cin >> salario ;

if ( salario <= 350) {
cout << "Ter� gratifica��o de: R$100. ";
aumento = 100;
 } 
 else if ( salario < 600) {
cout << "Ter� gratifica��o de: R$75. ";
aumento = 75;
} 
else if ( salario <= 900) {
cout << "Ter� gratifica��o de: R$50. ";
aumento = 50;
} 
else {
cout << "Ter� gratifica��o de: R$35. ";
aumento = 35;
}

imposto = salario * 0.07;

cout << "\nSal�rio atualizado: R$" << salario + aumento - imposto ;

}
