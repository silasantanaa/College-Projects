#include <iostream>
using namespace std;

int main () {
	
    float hora, minuto;

    cout << "Informe a quantidade de horas: ";
    cin >> hora;
    cout << "Informe a quantidade de minutos: ";
    cin >> minuto;
    
    cout << hora << " horas = " << ( hora * 60) << " minutos.\n";
    cout << "Total de minutos = " << (( hora * 60) + minuto);
    cout << "\nTotal em segundos = " << ((( hora * 60) + minuto )*60);


}

