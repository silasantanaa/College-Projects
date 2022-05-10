//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int canal, pessoa;
	float c4=0, c5=0, c7=0, c12=0, totalPessoa=0;
	char status;
	
	cout << "Se sua TV está ligada digite (L) ou (D) para desligada:";
	cin >> status;
	
	if (status == 'L'){
	cout << "Processando!!" << endl;
	}
	else{
	cout << "TV desligada!!" << endl;
	return 0;
	}	

	while (canal != 0){
		cout << "Digite número do canal (4, 5, 7, 12):";
	    cin >> canal;
		if (canal ==4){
			cout << "Digite o número de pessoas assistindo esse canal:";
			cin >> pessoa;
			c4++;
			c4 = c4 + pessoa;
		}
		else if (canal ==5){
			cout << "Digite o número de pessoas assistindo esse canal:";
			cin >> pessoa;			
			c5++;
			c5 = c5 + pessoa;
		}
		else if (canal ==7){
			cout << "Digite o número de pessoas assistindo esse canal:";
			cin >> pessoa;			
			c7++;
			c7 = c7 + pessoa;
		}
		else if (canal ==12){
			cout << "Digite o número de pessoas assistindo esse canal:";
			cin >> pessoa;			
			c12++;
			c12 = c12 + pessoa;
		}
		else{
			cout << "Número de canal digitado não é válido!" << endl;
		}
		
		totalPessoa = totalPessoa + pessoa;
	}
	cout << "Porcentagem de audiência do canal 4:" << (c4/totalPessoa)*100 << "%" << endl;
	cout << "Porcentagem de audiência do canal 5:" << (c5/totalPessoa)*100 << "%" << endl;
	cout << "Porcentagem de audiência do canal 7:" << (c7/totalPessoa)*100 << "%" << endl;
	cout << "Porcentagem de audiência do canal 12:" << (c12/totalPessoa)*100 << "%" << endl;


}
 
