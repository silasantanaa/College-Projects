#include<iostream>
using namespace std;

int main()
{
    float peso;

    cout << "Digite seu peso: ";
    cin >> peso;

    cout << "Seu peso se voce engorda 15%" << " = " << peso*1.15 << "kg\n";
    cout << "Seu peso se voce emagrecer 20% " << " = " << (peso*0.8) << "kg";


    return 0;
}
