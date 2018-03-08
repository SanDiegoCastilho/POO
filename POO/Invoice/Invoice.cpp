//San Diego - 28/01/2018 - 16:07.
//Definindo as Funções da classe Invoice.
#include <iostream>
#include <string>
#include "Invoice.h"

using std::cout;
using std::endl;
using std::string;

//Construtor, resposável por inicializar os valores dos objetos da classe Invoice.
Invoice::Invoice(string ide, string desc, int amo, int pri){
	//guarda os respectivos valores.
	setIdentifier(ide);
	setDescription(desc);
	setAmount(amo);
	setPrice(pri);
}

//Função responsável por guardar o identificador de um objeto da classe Invoice.
void Invoice::setIdentifier(string ide){
	identifier = ide;
}

//Função resposável por retornar o identificador de um objeto da classe Invoice.
string Invoice::getIdentifier(){
	return identifier;
}

//Função responsável por guardar a descrição de um objeto da classe Invoice.
void Invoice::setDescription(string desc){
	description = desc;
}

//Função responsável por retornar a descrição de um objeto da classe Invoice.
string Invoice::getDescription(){
	return description;
}

//Função resposável por guardar a quantidade de itens comprados.
void Invoice::setAmount(int amo){

	if (amo < 0)
		amount = 0;

	amount = amo;
}

//Função resposável por retornar a quantidade de itens comprados.
int Invoice::getAmount(){
	return amount;
}

//Função resposável por guardar o valor de cada item comprado.
void Invoice::setPrice(int pri){

	if (pri < 0)
		price = 0;

	price = pri;
}

//Função responsável por retorar o valor de cada item comprado.
int Invoice::getPrice(){
	return price;
}

//Função responsável por calcular o valor total da fatura e retornar esse valor.
int Invoice::getInvoiceAmount(){
	int result = price * amount;

	return result;
}