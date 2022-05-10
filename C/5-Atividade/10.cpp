#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	
	setlocale(LC_ALL, "");
	int total=0, imp=0, num, calc=0, num1=0;
	
	for (int i =0; i < 10; i++ ){
		cout << "Digite seu " << i+1 << "º " << "número:";
		cin >> num;
	}
	for (int i =0; i < 10; i++){
		if (num % 2 == 0) {
			num1++;
			total = total+num1;
		}
		else{
			imp++;
		}
		
	}
	cout << "Soma dos pares:" << total << endl;
	cout << "Soma dos números primos" << imp << endl;


}
	
	
