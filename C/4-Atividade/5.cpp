#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
float preco , aumento , novoPreco ;

cout << "Informe o pre�o atual: R$";
cin >> preco ;

if ( preco <= 50) {
cout << "Ter� aumento de 5%.";
aumento = preco * 0.05;
} 
else if ( preco <= 100) {
cout << "Ter� aumento de 10%. ";
aumento = preco * 0.1;
} 
else {
cout << "Ter� aumento de 15%. ";
aumento = preco * 0.15;
}

novoPreco = preco + aumento ;
cout << "\nNovo pre�o: R$" << novoPreco << ".\n";
if ( novoPreco <= 80)
cout << "Classifica��o pre�o: Barato.";
else if ( novoPreco <= 120)
cout << "Classifica��o pre�o:: Normal.";
else if ( novoPreco <= 200)
cout << "Classifica��o pre�o: Caro.";
else
cout << "Classifica��o pre�o: Muito caro.";

}
