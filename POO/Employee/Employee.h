//San Diego - 28/01/2018 - 20:14.
//Classe Employee - Questão 3.14.
#include <string>

using std::string;

class Employee{
public:
	//Contrutor, inicializa os atributos dos objetos da classe Employee.
	Employee(string, string, int);

	//Guarda o nome do objeto da classe Employee.
	void setName(string);

	//Retorna o nome do objeto da classe Employee.
	string getName();

	//Guarda o sobrenome do objeto da classe Employee.
	void setLastName(string);

	//Retorna o sobrenome do objeto da classe Employee.
	string getLastName();

	//Guarda o valor do salário de um objeto da classe Employee.
	void setSalary(int);

	//Retorna o valor do salário de um objeto da classe Employee.
	int getSalary();

private:
	string name, lastName;
	int salary;
}; 