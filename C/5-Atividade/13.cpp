//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;


int main (){
	
	setlocale(LC_ALL,"");
	int nao=0, sim=0, mulher=0;
	char sexo, resposta;
	float percent=0;
	
	for (int i = 0; i < 10; i++){
		cout << "Digite seu sexo:";
		cin >> sexo;
		cout << "Digite (S - sim; ou N - n�o):";
		cin >> resposta;
		cout << endl;
		if(resposta == 'S'){
			sim++;
		}
		if(resposta == 'N'){
			nao++;
		}
		if(sexo == 'M' and resposta == 'S'){
			mulher++;
		}
		if (sexo =='H' and resposta =='N'){
			percent++;
		}
	}
	cout << "O n�mero de pessoas que responderam sim:" << sim << endl;
	cout << "O n�mero de pessoas que responderam n�o:" << nao << endl;
	cout << "O n�mero de mulheres que responderam sim:" << mulher << endl;
	cout << "Porcentagem de homens que respoderam n�o, entre todos os homens:" << (percent/10)*100 << "%" << endl;
}
