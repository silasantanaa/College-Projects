//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream> 
#include <locale>
using namespace std;

int main(){

	setlocale(LC_ALL,"");
	int numeros[15], cont = 0;

    for(int s=0; s <= 15; s++){
        cout << "Digite um numero: ";
        cin >> numeros[s];  
    }
	cout << "temos um numero 30 na posi��o";
    
    for(int s=0; s <= 15; s++){
        if(numeros[s] == 30){
            cout << s <<" ";
            cont++;
        }
    }
}
