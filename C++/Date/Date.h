//San Diego - 29/01/2018 - 08:33.
//Classe Date - Questão 3.15.

class Date{
public:
	//Construtor da Classe Date.
	Date(int, int, int);

	//Guarda um valor para Day.
	void setDay(int);

	//Retorna o valor Day do objeto da classe Date.
	int getDay();

	//Guarda um valor para Month.
	void setMonth(int);

	//Retorna o valor Month do objeto da classe Month.
	int getMonth();

	//Guarda um valor para year.
	void setYear(int);

	//Retorna o valor Year do objeto da classe Date.
	int getYear();

	//Imprime na tela a data no formato: DD/MM/YYYY.
	void displayMessage();

private:
	int day, month, year;
};