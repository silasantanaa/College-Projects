//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int opcao;
	float c1=0, c2=0, c3=0, c4=0, vn5=0, vb6=0, percent=0, qtd=0;
	
	while(1){
		cout << "Digite 1 ou 2 ou 3 ou 4 para votar no seu candidato" << endl;
		cout << "e/ou 5 para votar nulo, 6 em branco:";
		cin >> opcao;
		if (opcao==0) break;
		
		if (opcao==1){
			c1++;
		}
		else if (opcao==2){
			c2++;
		}
		else if (opcao==3){
			c3++;
		}
		else if (opcao==4){
			c4++;
		}
		else if (opcao==5){
			vn5++;
			percent++;
		}
		else if (opcao==6){
			vb6++;
		}
		else{
			cout << "Opção Inválida!!" << endl;
		}
		qtd = (c1+c2+c3+c4+vn5+vb6);	
	}
	cout << "Total de votos para 1 candidato:" << c1 << endl;
	cout << "Total de votos para 2 candidato:" << c2 << endl;
	cout << "Total de votos para 3 candidato:" << c3 << endl;
	cout << "Total de votos para 4 candidato:" << c4 << endl;
	cout << "Total de votos nulos:" << vn5 << endl;
	cout << "Total de votos em brancos:" << vb6 << endl;
	cout << "Porcentagem de votos nulos sobre o total de votos:" << (percent/qtd)*100 << "%";
}
