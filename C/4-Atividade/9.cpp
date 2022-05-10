#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
int codigo, quantidade;
float preco, precoTotal, desconto ;

cout << "Informe o código do produto: ";
cin >> codigo;
cout << "Informe a quantidade do produto: ";
cin >> quantidade ;

switch ( codigo ) {
case 1 ... 10:
preco = 10;
break;
case 11 ... 20:
preco = 15;
break;
case 21 ... 30:
preco = 20;
break;
case 31 ... 40:
preco = 30;
break;
default:
cout << "Código inválido.";
}
precoTotal = preco * quantidade ;

if ( precoTotal <= 250)
desconto = precoTotal * 0.05;
else if ( precoTotal <= 500)
desconto = precoTotal * 0.1;
else
desconto = precoTotal * 0.15;

cout << "Preço final: R$" << precoTotal - desconto;

}
