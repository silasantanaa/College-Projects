#include <iostream>
#include <locale>
using namespace std;

int main () {
	
	setlocale (LC_ALL,"");
	
float salario, aumento, novoSalario;

cout << "Informe o salario atual: R$";
cin >> salario;

if (salario <= 300) {
cout << "Ter� aumento de 50%. ";
aumento = salario * 0.5;
} 
else if ( salario <= 500) {
cout << "Ter� aumento de 40%. ";
aumento = salario * 0.4;
}
else if ( salario <= 700) {
cout << "Ter� aumento de 30%. ";
aumento = salario * 0.3;
}
else if ( salario <= 800) {
cout << "Ter� aumento de 20%. ";
aumento = salario * 0.2;
}
else if ( salario <= 1000) {
cout << "Ter� aumento de 10%. ";
aumento = salario * 0.1;
}
else {
cout << "Ter� aumento de 5%. ";
aumento = salario * 0.05;
}

novoSalario = salario + aumento;
cout << "\nSal�rio atualizado: R$" << novoSalario;

}
