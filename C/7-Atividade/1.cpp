//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream> 
#include <locale>
using namespace std; 

int main(){
	
	setlocale(LC_ALL,"");
	int contPares,contImpares,num[6];
    for(int s=0; s < 6; s++){
        cout << "Digite um n�mero:";
        cin >> num[s];
        if(num[s]%2 == 0){
            contPares++; 
        }else{
            contImpares++;
        }
    } cout << "N�meros pares:"; 
    for(int s=0;s < 6; s++){
        if(num[s]%2 == 0){
            cout << num[s] << " ";
        }
    } cout << "\nN�meros impares:"; 
    for(int s = 0;s < 6; s++){
        if(num[s]%2 != 0){
            cout << num[s] << " ";
        }
    }
    cout << "\nQtd de n�meros pares:" << contPares << endl;
    cout << "Qtd de n�meros impares:" << contImpares;
}
