//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
    int vl[5],cont;
	string product[5];
	
    for(int c= 0; c < 5; c++){
        cout << "Digite o nome do produto:";
        cin >> product[c];
    }cout << "############################################" << endl;
    for(int x = 0; x < 5; x++){
        cout << "Digite o valor do "<< product[x] << ": ";
        cin >> vl[x];
        if(vl[x] < 50){
            cont++;
        }
    }
    cout << "Produto abaixo de R$ 50,00:" << cont << endl;
    cout << endl;
    cout << "Produtos com valores entre R$ 50 a 100:" << endl;
    
    for(int y=0;y <5; y++){
        if(vl[y] >= 50 && vl[y] <= 100){
            cout << product[y] << " --> R$: "<< vl[y] << endl;
        }
    }
    cout << "Média produto com valores superior a R$ 100,00:" << endl;
    for(int z=0; z < 5; z++){
        if(vl[z] > 100){
            cout << product[z] << " --> R$: "<< vl[z] << endl;
        }
    }
}
