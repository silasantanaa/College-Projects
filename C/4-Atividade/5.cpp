#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
float preco , aumento , novoPreco ;

cout << "Informe o preço atual: R$";
cin >> preco ;

if ( preco <= 50) {
cout << "Terá aumento de 5%.";
aumento = preco * 0.05;
} 
else if ( preco <= 100) {
cout << "Terá aumento de 10%. ";
aumento = preco * 0.1;
} 
else {
cout << "Terá aumento de 15%. ";
aumento = preco * 0.15;
}

novoPreco = preco + aumento ;
cout << "\nNovo preço: R$" << novoPreco << ".\n";
if ( novoPreco <= 80)
cout << "Classificação preço: Barato.";
else if ( novoPreco <= 120)
cout << "Classificação preço:: Normal.";
else if ( novoPreco <= 200)
cout << "Classificação preço: Caro.";
else
cout << "Classificação preço: Muito caro.";

}
