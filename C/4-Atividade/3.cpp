#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	  setlocale(LC_ALL,"");
      
	  float salario , aumento ;

      cout << "Informe seu sal�rio atual: R$";
      cin >> salario ;

     if (salario <= 300) {
    cout << " Ter� aumento de 15%. ";
    aumento = salario * 0.15;
    } else if (salario < 600) {
    cout << " Ter� aumento de 10%. ";
    aumento = salario * 0.1;
    }    
	else if (salario <= 900) {
    cout << "Ter� aumento de 5%.";
    aumento = salario * 0.05;
    }
    else {
    cout << "N�o ter� aumento.";
    aumento = 0;
    }
    
    cout << "\nSal�rio atualizado: R$" << salario+aumento;   
}
