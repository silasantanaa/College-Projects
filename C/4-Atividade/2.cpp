#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

int main() {
	
	setlocale(LC_ALL,"");
	
	float numero1, numero2;
    char opcao;

    cout << " Informe o 1º número: ";
    cin >> numero1;
    cout << " Informe o 2º número: ";
    cin >> numero2;

    cout << "\nEscolha uma opcão:\n";
    cout << "[a] - Potenciação\n";
    cout << "[b] - Raiz quadrada \n";
    cout << "[c] - Raiz cúbica \n";
    cin >> opcao ;
 
    switch ( opcao ) {
    case 'a':
   cout << " Potência do primeiro pelo segundo = " << pow( numero1 ,numero2 );
   break;
   case 'b':
   cout << "Raiz quadrada de " << numero1 << " = " << sqrt ( numero1 );
   cout << "\nRaiz quadrada de " << numero2 << " = " << sqrt ( numero2);
   break;
   case 'c':
   cout << "Raiz cúbica de " << numero1 << " = " << sqrt ( numero1 );
   cout << "\nRaiz cúbica de " << numero2 << " = " << sqrt ( numero2 );
   break;
   default:
cout << "Opção inválida.";
}
 }

