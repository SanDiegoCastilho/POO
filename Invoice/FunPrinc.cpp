//San Diego - 28/01/2018 - 16:41.
//Função principal - Testando a classe Invoice - Questão 3.13.
#include <iostream>
#include "Invoice.h"

using std::cout;
using std::endl;

int main(){

	//Inicializando objetos da classe Invoice.
	Invoice fatura1("123", "Primeira compra", 5, 9);
	Invoice fatura2("124", "Segunda compra", 6, 16);
	Invoice fatura3("145", "Terceira compra", 98, 133);

	//Testando a função getIdentifier dos objetos da classe Invoice.
	cout << "Identificador fatura 1: " << fatura1.getIdentifier() << endl;
	cout << "Identificador fatura 2: " << fatura2.getIdentifier() << endl;
	cout << "Identificador fatura 3: " << fatura3.getIdentifier() << endl;
	cout << "\n";

	//Testando a função getDescription dos objetos da classe Invoice.
	cout << "Descrição fatura 1: " << fatura1.getDescription() << endl;
	cout << "Descrição fatura 2: " << fatura2.getDescription() << endl;
	cout << "Descrição fatura 3: " << fatura3.getDescription() << endl;
	cout << "\n";

	

	return 0;
}