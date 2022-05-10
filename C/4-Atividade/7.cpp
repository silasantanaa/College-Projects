#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
	
int idade;

cout << "Informe a idade do nadador : ";
cin >> idade ;

switch ( idade ) {
case 5 ... 7:
cout << "Categoria: Infantil.";
break ;
case 8 ... 10:
cout << "Categoria: Juvenil.";
break ;
case 11 ... 15:
cout << "Categoria: Adolescente.";
break ;
case 16 ... 30:
cout << "Categoria: Adulto.";
break ;
default :
if ( idade > 30)
cout << "Categoria: Sênior.";
else
cout << "Sem categoria.";
}


}
