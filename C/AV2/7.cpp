//AV2 Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int a=0;
	cout << "Digite um n�mero:";
	cin >> a;
	cout << endl;
	for(int s =0; s<10; s++){
		
		cout << s << "x" << s << "=" << s*a << endl;
	}
}
