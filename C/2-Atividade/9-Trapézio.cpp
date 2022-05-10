#include<iostream>
using namespace std;

int main()
{

    float maior, menor, altura, soma;

    cout << "Informe o valor da base maior: ";

    cin >> maior;

    cout << "Informe o valor da base menor: ";

    cin >> menor;
    
    cout << "Informe o valor da base altura: ";

    cin >> altura;

    soma = (maior + menor)*altura/2;
    
    cout << "A área do trapézio: " << (soma);






    return 0;
}