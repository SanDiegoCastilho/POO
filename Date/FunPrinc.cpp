//San Diego - 29/01/2018 - 08:50.
//Tesntando a classe Date - Questão 3.15.
 #include <iostream>
 #include "Date.h"

using std::cout;
using std::endl;

int main(){

	//Criando objetos Date.
	Date data1(15, 03, 1998);
	Date data2(13, 03, 2017);

	//Testando as funções Get da classe Date.
	cout << "Dia da data 1: " << data1.getDay() << endl;
	cout << "Dia da data 2: " << data2.getDay() << endl;
	cout << "\n";

	cout << "Mês da data 1: " << data1.getMonth() << endl;
	cout << "Mês da data 2: " << data2.getMonth() << endl;
	cout << "\n";

	cout << "Ano da data 1: " << data1.getYear() << endl;
	cout << "Ano da data 2: " << data2.getYear() << endl;
	cout << "\n";

	//Testando as funções Set da classe Date.
	data1.setDay(200);
	data1.setMonth(200);
	data1.setYear(356);

	data2.setDay(15);
	data2.setMonth(03);
	data2.setYear(1998);

	//Verificando os resultados dos Set's.
	cout << "O novo Dia da data 1: " << data1.getDay() << endl;
	cout << "O novo Dia da data 2: " << data2.getDay() << endl;
	cout << "\n";

	cout << "O novo Mês da data 1: " << data1.getMonth() << endl;
	cout << "O novo Mês da data 2: " << data2.getMonth() << endl;
	cout << "\n";

	cout << "O novo Ano da data 1: " << data1.getYear() << endl;
	cout << "O novo Ano da data 2: " << data2.getYear() << endl;
	cout << "\n";

	//Imprimindo a data no formato DD/MM/YYYY;
	data1.displayMessage();

	data2.displayMessage();
	return 0;
}