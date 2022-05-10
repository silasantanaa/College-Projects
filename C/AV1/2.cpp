//AV1 Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale(LC_ALL, "");
	float peso, altura, calculo;
	int idade;
	char sx, name[50];
	
	cout << "Digite seu nome:";
	cin >> name;
	cout << "Digite sua idade:";
	cin >> idade;
	if (idade <18){
		cout << name << ", não há cálculo de IMC para menores de 18 anos";
		return 0;
	}else
	cout << name << ", digite seu sexo H para homem, M para mulher:";
	cin >> sx;
	if (sx !='H' && sx !='M'){
		cout << "Sexo informado é Inválido";
		return 0;
	}else 
	cout << "Digite sua altura:";
	cin >> altura;
	cout << "Digite seu peso:";
	cin >> peso;
	
	calculo = peso/(altura * altura);
	
	switch (sx){
		case 'H':
			if (calculo < 20){
			 	cout << name << ", seu IMC é igual a " << calculo << " e é classificado como Abaixo do normal";
			}else if (calculo >= 20 && calculo < 24){
				cout << name << ", seu IMC é igual a " << calculo << " e é classificado como Normal.";
			}else if (calculo >= 25 && calculo < 30){
				cout << name << ", seu IMC é igual a " << calculo << " e é classificado como Obesidade leve.";
			}else if (calculo >= 30 && calculo < 40){
				cout << name << ", seu IMC é igual a " << calculo << " e é classificado como Obesiade moderada.";
			}else {
				cout << name << ", seu IMC é igual a " << calculo << " e é classificado como Obesidade mórbida.";
			}
		break;
		case 'M':
			if (calculo < 19){
			 	cout << name << ", seu IMC é igual a " << calculo << " e é classificado como Abaixo do normal.";
			}else if (calculo >= 19 && calculo < 24){
				cout << name << ", seu IMC é igual a " << calculo << " e é classificado como Normal.";
			}else if (calculo >= 24 && calculo < 29){
				cout << name << ", seu IMC é igual a " << calculo << " e é classificado como Obesidade leve.";
			}else if (calculo >= 29 && calculo <39){
				cout << name << ", seu IMC é igual a " << calculo << " e é classificado como Obesiade moderada.";
			}else {
				cout << name << ", seu IMC é igual a " << calculo << " e é classificado como Obesidade mórbida.";
			}
		break;
		
	}
}
