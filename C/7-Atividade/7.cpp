//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int numb[10];
	int cont=0, soma=0;
	
    for(int s=0; s < 5; s++){ 
        cout << "Digite " << s+1 << "� n�mero:";
        cin >> numb[s];
        if(numb[s] < 0){
            cont++;
        }
        if(numb[s] > 0){
            soma += numb[s];
        }
    }
    cout <<"Qtd de n�meros negativos:" << cont << endl;
    cout <<"Soma de todos os n�meros positivo:" << soma <<endl;
}
