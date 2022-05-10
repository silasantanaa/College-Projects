#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	int password;
	
	cout << "Usuario(a), Digite sua senha:";
	cin >> password;
	
	if (password ==4531) {
		
		cout << "Acesso permitido";
	}
	else {
		cout << "Acesso negado";
	}
}
