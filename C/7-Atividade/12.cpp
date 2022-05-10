//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int numb[5], soma;
    for(int s=0; s < 5; s++){
        cout << "Digite o "<< s+1 << "º:";
        cin >> numb[s];
        if(numb[s] > 0){
            soma += numb[s];
        }
    }
    for(int z=0; z < 5; z++){
        cout <<  numb[z] << " + ";
    }
    cout << "=" << soma;
}
