//Introdu��o � Programa��o Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matr�cula:202103075691//

#include <iostream>
#include <locale>

using namespace std;
int main() {
	
	setlocale(LC_ALL,"");
	float a,b,c,d;

	for(int n=1; n<=5; n++) {
		cout <<"\t"<< n << "� grupo de numeros:"<<endl;
		cout<<"Digite um valor para A"<<endl;
		cin >> a;
		cout<<"Digite um valor para B"<<endl;
		cin >> b;		
		cout<<"Digite um valor para C"<<endl;
		cin >> c;
		cout<<"Digite um valor para D"<<endl;
		cin >> d;
		cout << "\n A ordem digitada foi: "<< a << " , " << b << " , " << c << " , " << d <<endl;
	
			if( (a>=b) && (a>=c) && (a>=d)){
				if ( (b>=c) && (b>=d)){
					if (c>=d){
						cout << "A ordem crescente � de: "<< d << " , " << c << " , " << b << " , " << a <<endl;
						cout << "A ordem decrescente � de: " << a << " , " << b << " , " << c << " , " << d <<endl;
					} else{
						cout << "A ordem crescente � de: "<< c << " , " << d << " , " << b << " , " << a <<endl;
						cout << "A ordem decrescente � de: " << a << " , " << b << " , " << d << " , " << c <<endl;
					}
				
				} else if ((c>=b) && (c>=d)){
					if (b>=d){
						cout << "A ordem crescente � de: "<< d << " , " << b << " , " << c << " , " << a <<endl;
						cout << "A ordem decrescente � de: " << a << " , " << c << " , " << b << " , " << d <<endl;	
					} else{
						cout << "A ordem crescente � de: "<< b << " , " << d << " , " << c << " , " << a <<endl;
						cout << "A ordem decrescente � de: " << a << " , " << c << " , " << d << " , " << b <<endl;	
					}
				} else {
					if (b>=c){
						cout << "A ordem crescente � de: "<< c << " , " << b << " , " << d << " , " << a <<endl;
						cout << "A ordem decrescente � de: " << a << " , " << d << " , " << b << " , " << c <<endl;	
					} else{
						cout << "A ordem crescente � de: "<< b << " , " << c << " , " << d << " , " << a <<endl;
						cout << "A ordem decrescente � de: " << a << " , " << d << " , " << c << " , " << b <<endl;
					}
				}
			} else if( (b>=a) && (b>=c) && (b>=d)){
				if ( (a>=c) && (a>=d)){
					if (c>=d){
						cout << "A ordem crescente � de: "<< d << " , " << c << " , " << a << " , " << b <<endl;
						cout << "A ordem decrescente � de: " << b << " , " << a << " , " << c << " , " << d <<endl;
					} else{
						cout << "A ordem crescente � de: "<< c << " , " << d << " , " << a << " , " << b <<endl;
						cout << "A ordem decrescente � de: " << b << " , " << a << " , " << d << " , " << c <<endl;
					}
				} else if ((c>=a) && (c>=d)){
					if (a>=d){
						cout << "A ordem crescente � de: "<< d << " , " << a << " , " << c << " , " << b <<endl;
						cout << "A ordem decrescente � de: " << b << " , " << c << " , " << a << " , " << d <<endl;	
					} else{
						cout << "A ordem crescente � de: "<< a << " , " << d << " , " << c << " , " << b <<endl;
						cout << "A ordem decrescente � de: " << b << " , " << c << " , " << d << " , " << a <<endl;	
					}
				} else {
					if (a>=c){
						cout << "A ordem crescente � de: "<< c << " , " << a << " , " << d << " , " << b <<endl;
						cout << "A ordem decrescente � de: " << b << " , " << d << " , " << a << " , " << c <<endl;	
					} else{
						cout << "A ordem crescente � de: "<< a << " , " << c << " , " << d << " , " << b <<endl;
						cout << "A ordem decrescente � de: " << b << " , " << d << " , " << c << " , " << a <<endl;	
					}
				}
			}else if( (c>=a) && (c>=b) && (c>=d)){
				if ( (a>=b) && (a>=d)){
					if (b>=d){
						cout << "A ordem crescente � de: "<< d << " , " << b << " , " << a << " , " << c <<endl;
						cout << "A ordem decrescente � de: " << c << " , " << a << " , " << b << " , " << d <<endl;
					} else{
						cout << "A ordem crescente � de: "<< b << " , " << d << " , " << a << " , " << c <<endl;
						cout << "A ordem decrescente � de: " << c << " , " << a << " , " << d << " , " << b <<endl;
					}
				} else if ((b>=a) && (b>=d)){
					if (a>=d){
						cout << "A ordem crescente � de: "<< d << " , " << a << " , " << b << " , " << c <<endl;
						cout << "A ordem decrescente � de: " << c << " , " << b << " , " << a << " , " << d <<endl;	
					} else{
						cout << "A ordem crescente � de: "<< a << " , " << d << " , " << b << " , " << c <<endl;
						cout << "A ordem decrescente � de: " << c << " , " << b << " , " << d << " , " << a <<endl;	
					}
				} else {
					if (a>=b){
						cout << "A ordem crescente � de: "<< b << " , " << a << " , " << d << " , " << c <<endl;
						cout << "A ordem decrescente � de: " << c << " , " << d << " , " << a << " , " << b <<endl;
					} else{
						cout << "A ordem crescente � de: "<< a << " , " << b << " , " << d << " , " << c <<endl;
						cout << "A ordem decrescente � de: " << c << " , " << d << " , " << b << " , " << a <<endl;
					}
				}
			}else if( (d>=a) && (d>=b) && (d>=c)){
				
				if ( (a>=b) && (a>=c)){
					if (b>=c){
						cout << "A ordem crescente � de: "<< c << " , " << b << " , " << a << " , " << d <<endl;
						cout << "A ordem decrescente � de: " << d << " , " << a << " , " << b << " , " << c <<endl;
					} else{
						cout << "A ordem crescente � de: "<< b << " , " << c << " , " << a << " , " << d <<endl;
						cout << "A ordem decrescente � de: " << d << " , " << a << " , " << c << " , " << b <<endl;
					}
				} else if ((b>=a) && (b>=c)){
					if (a>=c){
						cout << "A ordem crescente � de: "<< c << " , " << a << " , " << b << " , " << d <<endl;
						cout << "A ordem decrescente � de: " << d << " , " << b << " , " << a << " , " << c <<endl;	
					} else{
						cout << "A ordem crescente � de: "<< a << " , " << c << " , " << b << " , " << d <<endl;
						cout << "A ordem decrescente � de: " << d << " , " << b << " , " << c << " , " << a <<endl;	
					}
				} else  {
					if (a>=b){
						cout << "A ordem crescente � de: "<< b << " , " << a << " , " << c << " , " << d <<endl;
						cout << "A ordem decrescente � de: " << d << " , " << c << " , " << a << " , " << b <<endl;	
					} else{
						cout << "A ordem crescente � de: "<< a << " , " << b << " , " << c << " , " << d <<endl;
						cout << "A ordem decrescente � de: " << d << " , " << c << " , " << b << " , " << a <<endl;
					}
				}
			}
}
}
