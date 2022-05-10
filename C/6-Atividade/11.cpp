//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
    int valor=1, ae=0, ea=0;
    while(valor != 0){
        cout << "Insira um valor: ";
        cin >> valor;
        if(ae == 0 && ea == 0 && valor > 0){
            ae = valor;
            ea = valor;
        }
        if(valor > ae && valor > 0){
            ae = valor;
        }

        if(valor < ea && valor > 0){
            ea = valor;
        }
        if(valor < 0){
            cout << "Digite apenas valores inteiros positivos." << endl;
        }
    }
    cout << "Maior valor é: " << ae;
    cout << "\nMenor valor é: " << ea;
}
	

