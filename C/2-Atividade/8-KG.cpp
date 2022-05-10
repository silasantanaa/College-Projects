#include<iostream>
using namespace std;

int main()
{
    double kg, gramas;

    cout << "Digite seu peso em KG: ";
    cin >> kg;
    
    gramas = kg * 1000;

    cout << "Seu peso de " << kg << "kg" << " em gramas: " << gramas << "g";
    

    return 0;
   
}