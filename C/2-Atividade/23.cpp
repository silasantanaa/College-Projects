#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	
    float angulo1, angulo2;
    cout << " Informe um ângulo : ";
    cin >> angulo1;
    cout << " Informe outro ângulo : ";
    cin >> angulo2;

    cout << "O valor do 3º ângulo é = " << (180 - angulo1 - angulo2 );

}
