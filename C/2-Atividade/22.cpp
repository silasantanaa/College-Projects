#include <iostream>
#include <locale>
using namespace std;
 
int main () {
	
	setlocale(LC_ALL,"");
	
    int lados;
    
    cout << " Informe a quantidade de lados do pol ´i gono : ";
    cin >> lados;
	cout << "Número de diagonais : " << (( lados * ( lados - 3) ) / 2) ;


}
