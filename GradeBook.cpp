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

	//Função responsável por guardar o nome do curso.
	void setCourseName(string name){
		courseName = name; //Armazena o nome do curso no objeto.
	}

	//Função responsável por obter o nome do curso.
	string getCourseName (){
		return courseName; //Retorna o courseName do objeto.
	}

	//Função que imprime uma mensagem na tela.
	void displayMessage(){
		cout << "Welcome To The Grade Book!\n" << getCourseName() << endl;
	}

private:
	string courseName;
};

int main(){
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "O nome inicial do Curso é: " << myGradeBook.getCourseName() << endl;

	cout << "\nDigite o novo nome do curso: ";
	getline(cin, nameOfCourse);
	cout << endl;

	myGradeBook.setCourseName(nameOfCourse);

	myGradeBook.displayMessage();

	return 0;
}