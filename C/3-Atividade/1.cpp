#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale (LC_ALL, "");
	float nota1, nota2, nota3, nota4, notafinal;
	
	cout << "Aluno(a) digite sua primeira nota: ";
	cin >> nota1;
	
	cout << "Aluno(a) digite sua segunda nota: ";
	cin >> nota2;
	
	cout << "Aluno(a) digite sua terceira nota: ";
	cin >> nota3;
	
	cout << "Aluno(a) digite sua quarta nota: ";
	cin >> nota4;
	
	notafinal = (nota1+nota2+nota3+nota4)/4;
	
	cout << "Média = " << notafinal ;
	
	if (notafinal >=7){
		
		cout << "\nAluno(a) Aprovado!!!";
	}
	else {
		
		cout << "\nAluno(a) Reprovado!!!";
	}

	
}
