//San Diego - 28/01/2018 - 15:07.
//Questão 3.12 - Função principal - Testando a classe Account.
#include <iostream>
#include "Account.h"

using std::cout;
using std::endl;

int main(){

	//Criando objetos da classe Account.
	Account conta1(1000);
	Account conta2(0);
	Account conta3(-100);

	//Testando o construtor e Get Balance da Classe Account.
	cout << "Saldo da Conta 1: " << conta1.getBalance() << endl;
	cout << "Saldo da Conta 2: " << conta2.getBalance() << endl;
	cout << "Saldo da Conta 3: " << conta3.getBalance() << endl;
	cout << "\n";

	//Testando a função Credit da Classe Account.
	conta1.credit(200);
	conta2.credit(900);
	conta3.credit(1200);

	//Valores dos saldos após creditar.
	cout << "Saldo da Conta 1: " << conta1.getBalance() << endl;
	cout << "Saldo da Conta 2: " << conta2.getBalance() << endl;
	cout << "Saldo da Conta 3: " << conta3.getBalance() << endl;
	cout << "\n";

	//Testando a função Debit da Classe Account.
	conta1.debit(500);
	conta2.debit(8000);
	conta3.debit(-100);

	cout << "Saldo da Conta 1: " << conta1.getBalance() << endl;
	cout << "Saldo da Conta 2: " << conta2.getBalance() << endl;
	cout << "Saldo da Conta 3: " << conta3.getBalance() << endl;
	cout << "\n";

	return 0;
}