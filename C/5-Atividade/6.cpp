//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int time=15;
	float preco_vista=0, preco_prazo=0, total=0;
	char cod;
	 
	for(int i = 0; i<time; i++){
		float save;
		cout << i+1 << "�" << "Digite o C�digo V para � vista, P para prazo:";
		cin >> cod;
		cout << "Digite o Valor:";
		cin >> save;
		cout << endl;
		total += save;
		if(cod == 'P')
		preco_prazo += save;
		if (cod == 'V')
		preco_vista += save;
	}
	cout << "Valor � vista R$" << preco_vista << endl;
	cout << "Valor a prazo R$" << preco_prazo << endl;
	cout << "Valor total R$" << total << endl;
	cout << "Valor da 1� presta��o R$" << (1.0*preco_prazo)/3;
}
