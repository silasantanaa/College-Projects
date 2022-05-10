//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int vector1[10], vector2[10], soma;
    for(int s=0; s < 10; s++){
        cout << "Digite um número para o vetor 1:";
        cin >> vector1[s];
    }
    cout <<"##########################################" << endl;
    for(int x=0; x< 10; x++){
        cout << "Digite um número para o vetor 2:";
        cin >> vector2[x];
    }
    cout << "#########################################"<< endl;
    for(int y=0; y < 10; y++){
        soma = vector1[y] * vector2[y];
        cout << "A multiplicação entre "<< vector1[y] <<" x "<< vector2[y] << " ="<< soma << endl;
    }
}
