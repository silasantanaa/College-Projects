//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int numb[10], impar[10], pares[10];
	
   for(int s=0; s < 10; s++){
       cout << "Digite um n�mero:";
       cin >> numb[s];
   }
   cout << "\nTodos n�meros pares: ";
   
   for(int z = 0; z <10; z++){
        if(numb[z]%2 ==0){
            pares[z] = numb[z];
            cout << pares[z] <<" ";
       }
   }
   cout << "\nTodos os n�meros impares: ";
   
   for(int c = 0; c < 10; c++){
        if(numb[c]%2 !=0){
            impar[c] = numb[c];
            cout << impar[c]<<" ";
       }
   }
}
