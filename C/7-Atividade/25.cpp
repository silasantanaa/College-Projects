//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int vector[15], total=0, divisao, soma=0;
    for(int s=0; s < 15; s++){
        cout << "Digite " << s+1 << "º número:";
        cin >> vector[s];
        
        if(vector[s] > soma){
            soma = vector[s];
        }
        
        total+=vector[s];
    }
    divisao = total/soma;
    cout << "O valor da divisão dos valores do vetor:" << divisao;
}
