#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	
float preco, aumento, imposto, precoFinal;
int categoria;
char situacao;

cout << "Informe o pre�o do produto: R$";
cin >> preco ;
cout << "(1 - limpeza ; 2 - alimenta��o; ou 3 - vest�ario)\n";
cout << " Informe a categoria do produto: ";
cin >> categoria;
cout << "(R - refrigera��o; e N - sem refrigera��o)\n";
cout << " Informe a situa��o do produto: ";
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
cout << " Categoria inv�lida.";
}

if ( categoria == 2 || situacao == 'R')
imposto = 0.05 * preco;
else
imposto = 0.08 * preco;

precoFinal = preco + aumento - imposto;
cout << "Pre�o final: R$" << precoFinal <<".\n";

if ( precoFinal <= 50)
cout << "Classifica��o do novo pre�o: Barato.";
else if ( precoFinal < 120)
cout << "Classifica��o do novo pre�o: Normal.";
else
cout << "Classifica��o do novo pre�o: Caro.";

}
