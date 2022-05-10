#include <iostream>
#include <stdio.h>
using namespace std;

int num1;
int main()
{
    
    cout << "escreva um numero: ";
    cin >> num1;
    for(int c = 0; c < 10; c++){
        
        
        cout << c << " x " << c << " = " << c*num1 <<"\n";
       
    }
   
}
