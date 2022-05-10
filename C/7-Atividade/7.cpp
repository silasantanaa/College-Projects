//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int numb[10];
	int cont=0, soma=0;
	
    for(int s=0; s < 5; s++){ 
        cout << "Digite " << s+1 << "º número:";
        cin >> numb[s];
        if(numb[s] < 0){
            cont++;
        }
        if(numb[s] > 0){
            soma += numb[s];
        }
    }
    cout <<"Qtd de números negativos:" << cont << endl;
    cout <<"Soma de todos os números positivo:" << soma <<endl;
}
