#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	
float preco, aumento, imposto, precoFinal;
int categoria;
char situacao;

cout << "Informe o preço do produto: R$";
cin >> preco ;
cout << "(1 - limpeza ; 2 - alimentação; ou 3 - vestúario)\n";
cout << " Informe a categoria do produto: ";
cin >> categoria;
cout << "(R - refrigeração; e N - sem refrigeração)\n";
cout << " Informe a situação do produto: ";
cin >> situacao;

switch ( categoria ) {
case 1:
if ( preco <= 25)
aumento = 0.05 * preco;
else
aumento = 0.12 * preco;
break ;
case 2:
if ( preco <= 25)
aumento = 0.08 * preco ;
else
aumento = 0.15 * preco;
break ;
case 3:
if ( preco <= 25)
aumento = 0.1 * preco;
else
aumento = 0.18 * preco;
break ;
default :
cout << " Categoria inválida.";
}

if ( categoria == 2 || situacao == 'R')
imposto = 0.05 * preco;
else
imposto = 0.08 * preco;

precoFinal = preco + aumento - imposto;
cout << "Preço final: R$" << precoFinal <<".\n";

if ( precoFinal <= 50)
cout << "Classificação do novo preço: Barato.";
else if ( precoFinal < 120)
cout << "Classificação do novo preço: Normal.";
else
cout << "Classificação do novo preço: Caro.";

}
