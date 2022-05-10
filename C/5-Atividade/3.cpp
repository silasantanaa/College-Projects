//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale (LC_ALL, "");
	int idade, id1=0, id2=0, id3=0, id4=0, id5=0, qtd=8;
	float percent1=0, percent2=0;
	for (int i=0; i < 8; i++){
		cout << "Digite sua " << i+1 << "º" << " idade:";
		cin >> idade;
		
		if(idade <=15){
			id1++;
			percent1++;
		}
		else if(idade >=16 and idade <=30){
			id2++;
		}
		else if(idade >=31 and idade <=45){
			id3++;
		}
		else if (idade >=46 and idade <=60){
			id4++;
		}
		else{
			id5++;
			percent2++;
		}
	}
	cout << "Até 15 anos:" << id1 << endl;
	cout << "De 16 a 30 anos:" << id2 << endl;
	cout << "De 31 a 45 anos:" << id3 << endl;
	cout << "De 46 a 60 anos:" << id4 << endl;
	cout << "Acima de 60 anos:" << id5 << endl;
	cout << "Porcentagem  na primeira faixa etária com relação ao total de pessoas:" << (percent1/qtd)*100 << "%" << endl;
	cout << "Porcentagem na última faixa etária com relação ao total de pessoas:" << (percent2/qtd)*100 << "%" << endl;
}
