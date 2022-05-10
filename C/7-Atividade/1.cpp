//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream> 
#include <locale>
using namespace std; 

int main(){
	
	setlocale(LC_ALL,"");
	int contPares,contImpares,num[6];
    for(int s=0; s < 6; s++){
        cout << "Digite um número:";
        cin >> num[s];
        if(num[s]%2 == 0){
            contPares++; 
        }else{
            contImpares++;
        }
    } cout << "Números pares:"; 
    for(int s=0;s < 6; s++){
        if(num[s]%2 == 0){
            cout << num[s] << " ";
        }
    } cout << "\nNúmeros impares:"; 
    for(int s = 0;s < 6; s++){
        if(num[s]%2 != 0){
            cout << num[s] << " ";
        }
    }
    cout << "\nQtd de números pares:" << contPares << endl;
    cout << "Qtd de números impares:" << contImpares;
}
