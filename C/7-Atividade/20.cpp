//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int vetor1[10];
    for(int s=0; s < 10; s++){
        cout << "Digite " << s+1 << "º numero:";
        cin >> vetor1[s];
    }
    cout <<"##########################################" << endl;
    for(int x = 0; x < 10; x++){
        if(vetor1[x] > 0){
            cout <<"Valor positivo:" << vetor1[x] << endl;
        }
    }
}
