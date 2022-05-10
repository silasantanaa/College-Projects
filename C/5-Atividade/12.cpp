//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int idade, ps, id1=0, id2=0, id3=0, id4=0, ps1=0, ps2=0, ps3=0, ps4=0, qtd=15;
	float peso;
	
	for(int i =0; i < 15; i++){
		cout << "Digite sua idade:";
		cin >> idade;
		cout << "Digite seu peso:";
		cin >> peso;
		
		if(idade >=1 and idade <=10){
			id1++;
			ps1 += peso;
		}
		else if (idade >=11 and idade <=20){
			id2++;
			ps2 += peso;
		}
		else if (idade >= 21 and idade <=30){
			id3++;
			ps3 += peso;
		}
		else{
			id4++;
			ps4 += peso;
		}
	}
	cout << "Média do peso de 1 a 10 anos:" << ps1/qtd << endl;
	cout << "Média do peso de 11 a 20 anos:" << ps2/qtd << endl;
	cout << "Média do peso de 21 a 30 anos:" << ps3/qtd << endl;
	cout << "Média do peso de 31 anos para cima:" << ps4/qtd << endl;
}

