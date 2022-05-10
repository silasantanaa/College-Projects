//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
#include <math.h>
using namespace std;
int main (){
	
	setlocale(LC_ALL,"");
	float vCarro=0, precoFinal=0, qtdParcelas=0, vParcelas=0;
	float c6=0;
	char prazo;
	
    cout << "Digite o valor do carro:";
	cin >> vCarro;
	cout << "Digite V para à vista ou P para prazo:";
	cin >> prazo;
	
	if(prazo=='V'){
	int calc = vCarro*0.80;
	cout << "Preço Final R$:" << calc;
	return 0;
    }
    
	cout << "Informe a quantidade de parcerlas que desejada: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60:";
	cin >> qtdParcelas;
	cout << endl;
		
	if (qtdParcelas ==6){
	vCarro = vCarro*1.6;
	int c6=0;
	c6++;
	c6= c6+5;
	cout << "Preço Final R$:" << vCarro << endl;
	cout << "Quantidade Parcelas:" << c6; 
	}
	else if (qtdParcelas ==12){
	vCarro = vCarro*1.12;
	int c12=0;
	c12++;
	c12= c12+11;
	cout << "Preço Final R$:" << vCarro << endl;
	cout << "Quantidade Parcelas:" << c12;
	}
	else if (qtdParcelas ==18){
	vCarro = vCarro*1.18;
	int c18=0;
	c18++;
	c18= c18+17;
	cout << "Preço Final R$:" << vCarro << endl;
	cout << "Quantidade Parcelas:" << c18; 
	}
	else if (qtdParcelas ==24){
	vCarro = vCarro*1.24;
	int c24=0;
	c24++;
	c24= c24+23;
	cout << "Preço Final R$:" << vCarro << endl;
	cout << "Quantidade Parcelas:" << c24; 
	}
	else if (qtdParcelas ==30){
	vCarro = vCarro*1.30;
	int c30=0;
	c30++;
	c30= c30+29;
	cout << "Preço Final R$:" << vCarro << endl;
	cout << "Quantidade Parcelas:" << c30; 
	}
	else if (qtdParcelas ==36){
	vCarro = vCarro*1.36;
	int c36=0;
	c36++;
	c36= c36+35;
	cout << "Preço Final R$:" << vCarro << endl;
	cout << "Quantidade Parcelas:" << c36; 
	}
	else if (qtdParcelas ==42){
	vCarro = vCarro*1.42;
	int c42=0;
	c42++;
	c42= c42+41;
	cout << "Preço Final R$:" << vCarro << endl;
	cout << "Quantidade Parcelas:" << c42; 
	}
	else if (qtdParcelas ==48){
	vCarro = vCarro*1.48;
	int c48=0;
	c48++;
	c48= c48+47;
	cout << "Preço Final R$:" << vCarro << endl;
	cout << "Quantidade Parcelas:" << c48; 
	}
	else if (qtdParcelas ==54){
	vCarro = vCarro*1.54;
	int c54=0;
	c54++;
	c54= c54+53;
	cout << "Preço Final R$:" << vCarro << endl;
	cout << "Quantidade Parcelas:" << c54; 		
	}
	else if (qtdParcelas ==60){
	vCarro = vCarro*1.60;
	int c60=0;
	c60++;
	c60= c60+59;
	cout << "Preço Final R$:" << vCarro << endl;
	cout << "Quantidade Parcelas:" << c60; 
	}
	else{
	cout << "Quantidade de parcelas Inválida!";
	}
}
