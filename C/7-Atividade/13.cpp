//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int nota[8] ,media=0, soma=0;
    string aluno[8];
    
    for(int s=0; s < 8; s++){
        cout <<"Digite o nome do " << s+1 << "� aluno:";
        cin >> aluno[s];
    }
	cout << "##############################" << endl;
    
    for(int z=0; z < 8; z++){
        cout << "Digite a nota de "<< aluno[z] <<": ";
        cin >> nota[z];
        soma +=nota[z];
    }
	cout << "#############################" << endl;
    cout <<"###### RELAT�RIO DAS NOTAS ######" << endl;
    
    for(int u=0; u < 8; u++){
        cout << aluno[u] << ":" << nota[u] << endl;
    }
    cout << "###### M�DIA DA CLASSE #####" << endl;
    media=soma/8;
    cout <<"A m�dia da classe:" << media;
}
