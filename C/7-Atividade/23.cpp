//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	int vectorA[5], vectorB[5],sub[5];
    for(int s=0; s < 5; s++){
        cout << "digite um numero para o vetor A: ";
        cin >> vectorA[s];
    }cout <<"####################################"<< endl;
    for(int z=0; z < 5; z++){
        cout << "digite um numero para o vetor B: ";
        cin >> vectorB[z];
    }cout <<"####################################"<< endl;
    for(int y = 5; y != 0; y--){
        for(int z = 0; z < 5; z++){
            sub[z] = vectorA[z] - vectorB[y];
        }
    }
    for(int b=0; b < 5; b++){
        cout <<"resulta da subtração entre vetor A e o vetor B: " << sub[b] << endl;
    }
}
