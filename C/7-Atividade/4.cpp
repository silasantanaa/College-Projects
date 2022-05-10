//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <stdio.h>
#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
    int numb[6], cont=0;
    
   for(int s=0; s <= 6; s++){
       cout << "Digite " << s+1 <<   "º número:";
       cin >> numb[s];
   }cout << "Todos números múltiplos de 2: ";
   
   for(int i=0; i <= 6; i++){
       if(numb[i] %2 == 0){
           cout << numb[i]<<" ";
       }
   }
   cout << endl;
   cout << "Todos números múltiplos de 3: ";
   
   for(int l=0; l <=6; l++){
       if(numb[l] %3 == 0){
           cout <<numb[l]<<" ";
       }
   }
   cout << endl;
   cout << "Todo números múltiplos de 2 e 3: ";
   for(int v=0; v <= 6; v++){
       if(numb[v] %2 == 0 || numb[v] %3 == 0){
           cout << numb[v]<< " ";
       }
   }
}
