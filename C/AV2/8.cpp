//AV2 Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	float nota[4], media=0;
	
	for(int i=0; i <4; i++){
		cout << "Digite " << i+1 <<  "� nota:";
		cin >> nota[i];
		
		media= (nota[0]*2)+(nota[2]*2)+(nota[1]*3)+(nota[3]*3);
	}
	cout << "A m�dia �:" << media/10;
}
