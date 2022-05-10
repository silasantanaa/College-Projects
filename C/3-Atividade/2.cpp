#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL, "");
	float nota1, nota2, media;
	
	cout << "Aluno(a), digite sua primeira nota: ";
	cin >> nota1;
	
	cout << "Aluno(a), digite sua segunda nota: ";
	cin >> nota2;
	
	media = (nota1+nota2)/2;
	
	cout << "Média " << media;
	
	
	if (media >=7){
		
		cout << "\nAluno(a) Aprovado!!";
	}
	else if (media >=3){
		
		cout << "\nAluno(a) Exame!!";
	}
	else {
		
		cout << "\nAluno(a) Reprovado!!";
	}
	
	
	
	
	
	
	
	
	
	
}
