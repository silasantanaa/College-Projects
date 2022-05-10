//Introdução à Programação Estruturada em C.//
//Aluno: SILAS SANTANA DOS SANTOS
//Matrícula:202103075691//

#include <iostream>
#include <locale>
using namespace std;

int main (){
	
	setlocale(LC_ALL,"");
    float precoCompra=0, precoVenda=0, lucro=0, lucroTotal=0;
    int ml=0, to=0;
    char acao;

    while(1) {
        cout << "Digite o tipo de ação:";
        cin >> acao;
        if(acao == 'F'){
            break;
        }
        cout << "Digite o valor de compra:";
        cin >> precoCompra;
        cout << "Digite o valor de venda:";
        cin >> precoVenda;
        lucro = precoVenda - precoCompra;
        if(lucro > 1000) {
            ml++;
        }
        if(lucro < 200){
            to++;
        }
        lucroTotal = lucroTotal + lucro;
        cout << "Lucro ação R$:" << lucro << endl;
    }
    cout << "\nA quantidade de ações com lucros superior a 1.000R$:" << ml;
    cout << "\nA quantidade de ações com lucros inferiores a 200,00R$:" << to; 
    cout << "\nO lucro total da empresa:" << lucroTotal;
}


