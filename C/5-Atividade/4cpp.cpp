//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	
	setlocale(LC_ALL,"");
	int calc;
	cout << "Informe a tabuada que deseja:";
	cin >> calc;
	for (int i = 1; i <=10; i++){
		cout << i << " x " << calc << "=" << i*calc << endl;
	}
}
