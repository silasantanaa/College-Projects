#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

int main() {
	
	setlocale(LC_ALL,"");
	
	float numero1, numero2;
    char opcao;

    cout << " Informe o 1� n�mero: ";
    cin >> numero1;
    cout << " Informe o 2� n�mero: ";
    cin >> numero2;

    cout << "\nEscolha uma opc�o:\n";
    cout << "[a] - Potencia��o\n";
    cout << "[b] - Raiz quadrada \n";
    cout << "[c] - Raiz c�bica \n";
    cin >> opcao ;
 
    switch ( opcao ) {
    case 'a':
   cout << " Pot�ncia do primeiro pelo segundo = " << pow( numero1 ,numero2 );
   break;
   case 'b':
   cout << "Raiz quadrada de " << numero1 << " = " << sqrt ( numero1 );
   cout << "\nRaiz quadrada de " << numero2 << " = " << sqrt ( numero2);
   break;
   case 'c':
   cout << "Raiz c�bica de " << numero1 << " = " << sqrt ( numero1 );
   cout << "\nRaiz c�bica de " << numero2 << " = " << sqrt ( numero2 );
   break;
   default:
cout << "Op��o inv�lida.";
}
 }

