//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int idade, otimo=0, bom=0, regular=0, opinao, bomCalc=0, qtd=15;
	float percent=0, calc=0;
	
	for (int i = 0; i < 15; i++){
		
		cout << "Digite sua idade:";
		cin >> idade;
		cout << "Digite sua opini�o em rela��o filme: �timo - 3; bom - 2; regular - 1:";
		cin >> opinao;
		
		if(opinao==3){
			otimo++;
			calc = calc+idade;
		}
		else if (opinao==2){
			bom++;
			percent++;
		}
		else{
			regular++;
		}	
	}
	cout << endl;
	cout << "M�dia das idades das pessoas que responderam �timo:" << calc/otimo << endl;
	cout << "Quantidade de pessoas que responderam regular:" << regular << endl;
	cout << "Percentagem de pessoas que responderam bom entre todas analisadas:" << (percent/qtd)*100 << "%" << endl;
}
