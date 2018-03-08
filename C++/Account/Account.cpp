//San Diego - 26/01/2018 - 18:42.
//Definição das funções membro da classe Account.
#include <iostream>
#include "Account.h"

using std::cout;
using std::endl;

//Construtor.
Account::Account(int ValIni){
	Balance = 0;

	if (ValIni >= 0){ //Verifica a validade dos dados passados ao criar o objeto.
		Account::credit(ValIni);
		cout << "Conta criada com sucesso.\n";

	}else{
		cout << "Valor de saldo inicial inválido\n";
	}
}

//Encarregada de adicionar um valor passado como argumento à conta.
void Account::credit(int Val){
	if (Val >= 0){ //Verifica a validade do valor passado.
		Balance = Balance + Val;

	}else{
		cout << "Valor de credito inválido!\n"; 
	}
}

//Responsável por debitar da conta um valor passado como argumento.
void Account::debit(int Val){
	if (Val <= Balance && Val >= 0){
		Balance = Balance - Val;
		cout << "Valor debitado com sucesso!\n";

	}else{

		if (Val < 0)  //Escolhe qual mensagem imprimir de acordo com o erro.
			cout << "Valor inválido!\n";  

		cout << "Valor requerido excede o seu saldo\n";
	}
}
	
//Responsável por retornar o valor do saldo da conta.
int Account::getBalance(){
	return Balance;
}
