//San Diego - 28/01/2018 - 20:32.
//Função principal - Testando as funções membro da classe Employee.
#include <iostream>
#include "Employee.h"

using std::cout;
using std::endl;

int main(){

	//Instanciando objetos da classe Employee.
	Employee empregado1("San", "Diego", 1000);
	Employee empregado2("Francisco", "Castilho", 1200);

	//Testando as funções getName.
	cout << "O nome do empregado 1: " << empregado1.getName() << endl;
	cout << "O nome do empredado 2: " << empregado2.getName() << endl;
	cout << "\n";

	//Testando as funções getLastName.
	cout << "O sobrenome do empregado 1: " << empregado1.getLastName() << endl;
	cout << "O sobrenome do empregado 2: " << empregado2.getLastName() << endl;
	cout << "\n";

	//Testando as funções getSalary.
	cout << "O salário do empregado 1: " << empregado1.getSalary() << endl;
	cout << "O salário do empregado 2: " << empregado2.getSalary() << endl;
	cout << "\n";

	//Testando as funções SET dos objetos da classe Employee.
	empregado1.setName("Sanzão");
	empregado1.setLastName("Diegão");
	empregado1.setSalary(2000);

	empregado2.setName("LEro");
	empregado2.setLastName("LEROLERO");
	empregado2.setSalary(22000);

	//Testando as funções getName.
	cout << "O nome do empregado 1: " << empregado1.getName() << endl;
	cout << "O nome do empredado 2: " << empregado2.getName() << endl;
	cout << "\n";

	//Testando as funções getLastName.
	cout << "O sobrenome do empregado 1: " << empregado1.getLastName() << endl;
	cout << "O sobrenome do empregado 2: " << empregado2.getLastName() << endl;
	cout << "\n";

	//Testando as funções getSalary.
	cout << "O salário do empregado 1: " << empregado1.getSalary() << endl;
	cout << "O salário do empregado 2: " << empregado2.getSalary() << endl;
	cout << "\n";

	return 0;
}