#include <iostream>
using namespace std;

int main (){
	
	int idade;
	float peso;
	
	cout << "Informe sua idade:";
	cin >> idade;
	
    cout << "Informe seu peso:";
    cin >> peso;
    
    if ( idade < 20) {
    if ( peso <= 60)
    
    cout << "Grupo de risco: 9";
    else if ( peso <= 90)
    cout << "Grupo de risco: 8";
    else
    cout << "Grupo de risco: 7";
 } else if ( idade <= 50) {
 if ( peso <= 60)
 cout << "Grupo de risco: 6";
 else if ( peso <= 90)
 cout << "Grupo de risco: 5";
 else
 cout << "Grupo de risco: 4";
 } else {
 if ( peso <= 60)
 cout << "Grupo de risco: 3";
 else if ( peso <= 90)
 cout << "Grupo de risco: 2";
 else
 cout << " Grupo de risco: 1";
 }
 }

