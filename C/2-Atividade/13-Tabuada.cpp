#include <iostream>
using namespace std;

int main () {
	
	cout << "Informe a tabuada que deseja: " << endl;
	
	int calc = 0;
	cin >> calc;
	
	for (int i =1; i<=10; i++){
		
		cout << i << " x " << calc << " = " << i*calc << endl;
	}
	
	
}
