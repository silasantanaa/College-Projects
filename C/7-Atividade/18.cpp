//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int vector[15], maior=0, menor=100;
    for(int s=0; s < 15; s++){
        cout << "Digite " << s+1 << "� n�mero:";
        cin >> vector[s];
        
        if(vector[s] > maior){
            maior = vector[s];
        }
        
    }
	cout << "";
    
    for(int x =0; x < 15; x++){
        if(vector[x] == maior){
            cout << "Maior n�mero:"<< maior <<" e a sua posi��o:"<< x+1 << endl;
        }
        
    }
    for(int y =0; y < 15; y++){
        if(vector[y] < menor){
            menor = vector[y];
        }
        
    }
    for(int z =0; z < 15; z++){
        if(vector[z] == menor){
            cout << "Menor n�mero:"<< menor << " e a sua posi��o:" << z+1 << endl;
        }
    }
}
