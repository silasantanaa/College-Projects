//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int opcao;
	while (1){
		cout << "1-M�dia aritm�tica. 2-M�dia ponderada. 3-Sair:";
		cin >> opcao;	
		if(opcao==1){
			float media_arit=0, media_arit2=0, soma=0;
			cout << "Insira seu primeiro n�mero:";
			cin >> media_arit;
			cout << "Insira seu segundo n�mero:";
			cin >> media_arit2;
			soma = (media_arit+media_arit2)/2;
			cout << "A M�dia aritm�tica �:" << soma << endl;;			
		}
		else if (opcao==2){
			float media_pond=0, media_pond2=0, media_pond3=0;
			float peso1=0, peso2=0, peso3=0;
			float soma=0;
			cout << "Insira seu primeiro n�mero:"; 
			cin >> media_pond;
			cout << "Insira seu primeiro peso:";
			cin >> peso1;
			cout << "Insira seu segundo n�mero:";
			cin >> media_pond2;
			cout << "Insira seu segundo peso:";
			cin >> peso2;
			cout << "Insira seu terceiro n�mero:";
			cin >> media_pond3;
			cout << "Insira seu terceiro peso:";
			cin >> peso3;
			soma = ((media_pond*peso1)+(media_pond2*peso2)+(media_pond3*peso3))/(peso1+peso2+peso3);
			cout << "A M�dia ponderada �:" << soma << endl;
		}
		else if (opcao==3){
			cout << "Saindo do programa em 3" << endl;
			cout << "Saindo do programa em 2" << endl;
			cout << "Saindo do programa em 1" << endl;
			return 0;
		}
		else{
			cout << "Op��o Inv�lida!!" << endl;
		}
	}
}
