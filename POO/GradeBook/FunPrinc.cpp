//San Diego - 26/01/2018 - 12:03.
//Introdução a classes e objetos.
// Separando interfaces de implementação.
#include <iostream>
#include "GradeBook.h"

using std::cout;
using std::cin;
using std::endl;	

int main(){

	GradeBook gradebook1("Ciencia da Computação", "San Diego");
	GradeBook gradebook2("Engenharia da Computação", "Francisco");

	gradebook1.displayMessage();
	cout << "O nome do curso 1 é: " << gradebook1.getCourseName() << endl;
	cout << "O nome do professor é: " << gradebook1.getInstructorName() << endl;


	cout << "O nome do curso 2 é: " << gradebook2.getCourseName() << endl;
	cout << "O nome do professor é: "<< gradebook2.getInstructorName() << endl;

	gradebook1.determineClassAverage();

	return 0;
}