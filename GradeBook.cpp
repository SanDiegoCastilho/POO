//San Diego  - modificado - 19/01/2018 - 16:57
//Introdução a Orientação a Objetos com C++.
//Criando uma classe GradeBook e imprimir uma mensagem na tela.
#include <iostream>
#include <string>

using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::endl;

//Declarando a classe GradeBook.
class GradeBook{
public:

	//Função que imprime uma mensagem na tela.
	void displayMessage(string courseName){
		cout << "Welcome To The Grade Book!\n" << courseName << endl;
	}
};

int main(){
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "Digite o nome do curso: ";
	getline(cin, nameOfCourse);
	cout << endl;

	myGradeBook.displayMessage(nameOfCourse);

	return 0;
}