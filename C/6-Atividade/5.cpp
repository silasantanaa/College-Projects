//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

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
	    	cout << "Informe seu sal�rio R$:";
		    cin >> salario; 
		    media = media + salario; 
		    cont = cont + 1;
		}
		else if (sexo == 'F'){
			f++;
			cout << "Informe seu sal�rio R$:";
		    cin >> salario; 
		    media = media + salario;
		    cont = cont + 1;
		}
		else{
			cout << "Sexo inv�lido!!" << endl;
		}
		if (sexo == 'F' && salario <=200){
			sal++;	
		}
		if (salario > menorSalario){
			mIdade=idade;
			sexoMenor= sexo;	
		}	
	}
	cout << "A m�dia dos sal�rios do grupo" << media/cont << endl;
	cout << "A maior idade do grupo:" << maiorIdade << endl;
	cout << "A menor idade o grupo:" << menorIdade << endl;
	cout << "Quantidade de mulheres com sal�rio at� R$ 200.00 :" << sal << endl;
	cout << "A idade:" << mIdade <<  " e o sexo:" << sexoMenor << " da pessoa que possui o menor sal�rio.";
}
