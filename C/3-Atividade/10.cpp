#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL, "");
    float preco, desconto;
    
    cout << "Digite o pre�o do produto: R$";
    cin >> preco;

   if ( preco < 30) {
   cout << "N�o ter� desconto.\n";
    desconto = 0;
  } else if ( preco <= 100) {
 cout << "Produto com 10% de desconto.\n";
 desconto = preco * 0.1;
 } else {
 cout << "Produto com 15% de desconto.\n";
 desconto = preco * 0.15;
 }
 cout << "Valor do desconto: R$" << desconto;
cout << "\nNovo pre�o do produto: R$" << (preco - desconto);

}
