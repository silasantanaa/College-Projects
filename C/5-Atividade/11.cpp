//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
	int s, ll, i, a, n, cp;
	cp=0;
	
	for(i=1;i<=10;i++){
		
		cout<<"Digite o "<<i<<"� numero: "<<endl;
		cin>>n;		
		ll=0;
		
		for(a=1;a<=n;a++){
			s=n%a;
			if(s==0){
				
				ll=ll+1;
			}
		}
		if(ll==2){
			cp=cp+1;
		}
	}
		cout<<"A quantidade de numeros primos � de: "<<cp<<endl;
}
