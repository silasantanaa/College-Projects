#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
float horaExtra, horaFalta, minutoTotal;

cout << "Informe a quantidade de horas extras: ";
cin >> horaExtra;
cout << "Informe a quantidade de horas faltadas: ";
cin >> horaFalta;

minutoTotal = ( horaExtra * 60) - (2 * ( horaFalta * 60) / 3) ;

if ( minutoTotal < 600)
cout << "Pr�mio que ter� direito = R$100 ";
else if ( minutoTotal < 1200)
cout << "Pr�mio que ter� direito = R$200 ";
else if ( minutoTotal < 1800)
cout << "Pr�mio que ter� direito = R$300 ";
else if ( minutoTotal < 2400)
cout << "Pr�mio que ter� direito = R$400 ";
else
cout << "Pr�mio que ter� direito = R$500 ";


}
