//San Diego - 28/01/2018 - 15:52.
//Classe Invoice - Questão 3.13.
#include <string>

using std::string;

class Invoice{
public:
	//Construtor.
	Invoice(string, string, int, int);

	//Função responsável por guardar o identificador de um objeto da classe Invoice.
	void setIdentifier(string);

	//Função resposável por retornar o identificador de um objeto da classe Invoice.
	string getIdentifier();

	//Função responsável por guardar a descrição de um objeto da classe Invoice.
	void setDescription(string);

	//Função responsável por retornar a descrição de um objeto da classe Invoice.
	string getDescription();

	//Função resposável por guardar a quantidade de itens comprados.
	void setAmount(int);

	//Função resposável por retornar a quantidade de itens comprados.
	int getAmount();

	//Função resposável por guardar o valor de cada item comprado.
	void setPrice(int);

	//Função responsável por retorar o valor de cada item comprado.
	int getPrice();

	//Função responsável por calcular o valor total da fatura e retornar esse valor.
	int getInvoiceAmount();

private:
	string identifier, description;
	int amount, price;
};