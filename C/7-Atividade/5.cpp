//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int mat[15], matr[15];
	
    for(int  c = 0; c < 15; c++){
        cout <<"Digite o número da sua matricula em logica:";
        cin >> mat[c];
    }
	cout << "######################################################################" << endl;
    
    for(int x = 0; x < 15; x++){
        cout << "Digite o número da sua matricula em linguagem de programação:";
        cin >> matr[x];
    }
	cout << "######################################################################"<< endl;
    
    for(int y = 0; y < 15; y++){
        for(int z = 0; z < 15; z++){
            if(matr[y] == mat[z]){
                int mt = mat[z];
                cout << "O aluno de matricula "<< mt<< " está matriculado nas duas diciplina." << endl ;
            }
        }
    }
}
