//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//
#include <iostream>
#include <locale>
using namespace std;


int main(){
	
	setlocale(LC_ALL,"");
	string alunos[7];
    int media[7], qtd=0;

    for(int s=0; s < 7; s++){
        cout << "digite seu nome: ";
        cin >> alunos[s];
        cout << "digite sua media: ";
        cin >> media[s];
        cout <<"###########################################" << endl;
        if(media[s] > qtd){
            qtd = media[s];
        }
    }
    cout << "A maior m�dia foi:" << qtd << endl;
    for( int s=0; s < 7; s++){
        if(media[s] < 7){
            cout << alunos[s] << ", voc� tem que tirar m�dia 5 na recupera��o final.";
			cout << endl;    
        }
    }
}
