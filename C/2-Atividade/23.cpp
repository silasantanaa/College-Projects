#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
    float angulo1, angulo2;
    cout << " Informe um �ngulo : ";
    cin >> angulo1;
    cout << " Informe outro �ngulo : ";
    cin >> angulo2;

    cout << "O valor do 3� �ngulo � = " << (180 - angulo1 - angulo2 );

}
