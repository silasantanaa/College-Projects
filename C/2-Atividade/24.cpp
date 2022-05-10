#include <iostream>
using namespace std;

int main () {
	
    float reais, dolar, marco, libra;
    cout << "Informe o valor em R$";
    cin >> reais;

    cout << "Convertendo para outras moedas...\n";
    dolar = reais /1.8;
    marco = reais /2;
    libra = reais /3.57;

    cout << "\nU$ " << dolar;
    cout << "\nM$ " << marco;
    cout << "\nL$ " << libra;

}

