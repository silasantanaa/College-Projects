#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	
int codigo;

cout << "Informe o código de origem do produto: ";
cin >> codigo;

switch ( codigo ) {
case 1:
cout << "Procedência : Sul.";
break ;
case 2:
cout << "Procedência: Norte.";
break ;
case 3:
cout << "Procedência: Leste.";
break;
case 4:
cout << " Procedência: Oeste.";
break;
case 5 ... 6:
cout << "Procedência: Nordeste.";
break;
case 7 ... 9:
cout << "Procedência: Sudeste.";
break;
case 10 ... 20:
cout << "Procedência: Centro-oeste.";
break;
case 21 ... 30:
cout << "Procedência: Nordeste.";
break;
default:
cout << "Código inválido.";
}



}

