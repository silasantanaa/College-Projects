#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	  setlocale(LC_ALL,"");
      
	  float salario , aumento ;

      cout << "Informe seu salário atual: R$";
      cin >> salario ;

     if (salario <= 300) {
    cout << " Terá aumento de 15%. ";
    aumento = salario * 0.15;
    } else if (salario < 600) {
    cout << " Terá aumento de 10%. ";
    aumento = salario * 0.1;
    }    
	else if (salario <= 900) {
    cout << "Terá aumento de 5%.";
    aumento = salario * 0.05;
    }
    else {
    cout << "Não terá aumento.";
    aumento = 0;
    }
    
    cout << "\nSalário atualizado: R$" << salario+aumento;   
}
