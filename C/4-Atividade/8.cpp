#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	
int codigo;

cout << "Informe o c�digo de origem do produto: ";
cin >> codigo;

switch ( codigo ) {
case 1:
cout << "Proced�ncia : Sul.";
break ;
case 2:
cout << "Proced�ncia: Norte.";
break ;
case 3:
cout << "Proced�ncia: Leste.";
break;
case 4:
cout << " Proced�ncia: Oeste.";
break;
case 5 ... 6:
cout << "Proced�ncia: Nordeste.";
break;
case 7 ... 9:
cout << "Proced�ncia: Sudeste.";
break;
case 10 ... 20:
cout << "Proced�ncia: Centro-oeste.";
break;
case 21 ... 30:
cout << "Proced�ncia: Nordeste.";
break;
default:
cout << "C�digo inv�lido.";
}



}

