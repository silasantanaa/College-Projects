//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL,"");
	for (int i =1; i <=10; i++){
		for (int s = 1; s <=10; s++){
			cout << i << " x " << s<< "=" << i*s << endl;
		}
	}
}
