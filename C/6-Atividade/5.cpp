//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	char sexo, sexoMenor;
	float salario, media=0, cont=0, sal=0, menorSalario=0;
	int idade, m=0, f=0, maiorIdade=0, menorIdade=200, mIdade;
	
	while (1){
		cout << "Digite sua idade:";
        cin >> idade;
        if (idade < 0) break;
        if (idade > maiorIdade ){
        	maiorIdade = idade;
		}
		if (idade < menorIdade){
			menorIdade = idade;
		}
	    cout << "Digite seu sexo (M/F):";
	    cin >> sexo;
	    if (sexo == 'M'){
	    	m++;
	    	cout << "Informe seu salário R$:";
		    cin >> salario; 
		    media = media + salario; 
		    cont = cont + 1;
		}
		else if (sexo == 'F'){
			f++;
			cout << "Informe seu salário R$:";
		    cin >> salario; 
		    media = media + salario;
		    cont = cont + 1;
		}
		else{
			cout << "Sexo inválido!!" << endl;
		}
		if (sexo == 'F' && salario <=200){
			sal++;	
		}
		if (salario > menorSalario){
			mIdade=idade;
			sexoMenor= sexo;	
		}	
	}
	cout << "A média dos salários do grupo" << media/cont << endl;
	cout << "A maior idade do grupo:" << maiorIdade << endl;
	cout << "A menor idade o grupo:" << menorIdade << endl;
	cout << "Quantidade de mulheres com salário até R$ 200.00 :" << sal << endl;
	cout << "A idade:" << mIdade <<  " e o sexo:" << sexoMenor << " da pessoa que possui o menor salário.";
}
