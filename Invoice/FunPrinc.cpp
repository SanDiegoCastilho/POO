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

	//Testando a função getAmount dos objetos da classe Invoice.
	cout << "A quantidade comprada de um item da fatura 1: " << fatura1.getAmount() << endl;
	cout << "A quantidade comprada de um item da fatura 2: " << fatura2.getAmount() << endl;
	cout << "A quantidade comprada de um item da fatura 3: " << fatura3.getAmount() << endl;
	cout << "\n";

	//Testando a função getPrice dos objetos da classe Invoice.
	cout << "O preço de cada intem comprado na fatura 1: R$ " << fatura1.getPrice() << endl;
	cout << "O preço de cada intem comprado na fatura 2: R$ " << fatura2.getPrice() << endl;
	cout << "O preço de cada intem comprado na fatura 3: R$ " << fatura3.getPrice() << endl;
	cout << "\n";

	//Testando a função getInvoiceAmount dos objetos da classe Invoice.
	cout << "O valor total da compra da fatura 1: R$ " << fatura1.getInvoiceAmount() << endl;
	cout << "O valor total da compra da fatura 2: R$ " << fatura2.getInvoiceAmount() << endl;
	cout << "O valor total da compra da fatura 3: R$ " << fatura3.getInvoiceAmount() << endl;
	cout << "\n";	

	//Testando as funções SET dos objetos da classe Invoice.
	fatura1.setIdentifier("0987");
	fatura1.setDescription("Adicionando uma nova descrição fatura 1");
	fatura1.setAmount(900);
	fatura1.setPrice(999);

	fatura2.setIdentifier("7890");
	fatura2.setDescription("Adicionando uma nova descrição fatura 2");
	fatura2.setAmount(600);
	fatura2.setPrice(666);

	fatura3.setIdentifier("7089");
	fatura3.setDescription("Adicionando uma nova descrição fatura 3");
	fatura3.setAmount(700);
	fatura3.setPrice(777);

	//Testando a função getIdentifier dos objetos da classe Invoice.
	cout << "O novo Identificador fatura 1: " << fatura1.getIdentifier() << endl;
	cout << "O novo Identificador fatura 2: " << fatura2.getIdentifier() << endl;
	cout << "O novo Identificador fatura 3: " << fatura3.getIdentifier() << endl;
	cout << "\n";

	//Testando a função getDescription dos objetos da classe Invoice.
	cout << "A nova Descrição fatura 1: " << fatura1.getDescription() << endl;
	cout << "A nova Descrição fatura 2: " << fatura2.getDescription() << endl;
	cout << "A nova Descrição fatura 3: " << fatura3.getDescription() << endl;
	cout << "\n";

	//Testando a função getAmount dos objetos da classe Invoice.
	cout << "A nova quantidade comprada de um item da fatura 1: " << fatura1.getAmount() << endl;
	cout << "A nova quantidade comprada de um item da fatura 2: " << fatura2.getAmount() << endl;
	cout << "A nova quantidade comprada de um item da fatura 3: " << fatura3.getAmount() << endl;
	cout << "\n";

	//Testando a função getPrice dos objetos da classe Invoice.
	cout << "O novo preço de cada intem comprado na fatura 1: R$ " << fatura1.getPrice() << endl;
	cout << "O novo preço de cada intem comprado na fatura 2: R$ " << fatura2.getPrice() << endl;
	cout << "O novo preço de cada intem comprado na fatura 3: R$ " << fatura3.getPrice() << endl;
	cout << "\n";

	//Testando a função getInvoiceAmount dos objetos da classe Invoice.
	cout << "O novo valor total da compra da fatura 1: R$ " << fatura1.getInvoiceAmount() << endl;
	cout << "O novo valor total da compra da fatura 2: R$ " << fatura2.getInvoiceAmount() << endl;
	cout << "O novo valor total da compra da fatura 3: R$ " << fatura3.getInvoiceAmount() << endl;
	cout << "\n";	

	return 0;
}