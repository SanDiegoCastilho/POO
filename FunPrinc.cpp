//San Diego - 26/01/2018 - 12:03.
//Introdução a classes e objetos.
// Separando interfaces de implementação.
#include <iostream>
#include "GradeBook.h"

using std::cout;
using std::cin;
using std::endl;	

int main(){

	GradeBook gradebook1("Ciencia da Computação");
	GradeBook gradebook2("Engenharia da Computação");

	cout << "O nome inicial do gradebook1 é: " << gradebook1.getCourseName() << endl;
	cout << "O nome inicial do gradebook2 é: " << gradebook2.getCourseName() << endl;

	return 0;
}