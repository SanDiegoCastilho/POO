//San Diego - 28/01/2018 - 20:21.
//Definição das funções da classe Employee.
#include "Employee.h"

//Contrutor, inicializa os atributos dos objetos da classe Employee.
Employee::Employee(string Name, string LastName, int Salr){
	setName(Name);
	setLastName(LastName);
	setSalary(Salr);
}

//Guarda o nome do objeto da classe Employee.
void Employee::setName(string Name){
	name = Name;
}

//Retorna o nome do objeto da classe Employee.
string Employee::getName(){
	return name;
}

//Guarda o sobrenome do objeto da classe Employee.
void Employee::setLastName(string LastName){
	lastName = LastName;
}

//Retorna o sobrenome do objeto da classe Employee.
string Employee::getLastName(){
	return lastName;
}

//Guarda o valor do salário de um objeto da classe Employee.
void Employee::setSalary(int Salr){
	if (Salr < 0)
		salary = 0;

	salary =  Salr;
}

//Retorna o valor do salário de um objeto da classe Employee.
int Employee::getSalary(){
	return salary;
}