//San Diego  - modificado - 19/01/2018 - 18:17
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
	//O construtor inicializa courseName com uma string passada como argumento.
	GradeBook(string name){
		setCourseName(name);
	}

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

	GradeBook gradebook1("Ciencia da Computação");
	GradeBook gradebook2("Engenharia da Computação");

	cout << "O nome inicial do gradebook1 é: " << gradebook1.getCourseName() << endl;
	cout << "O nome inicial do gradebook2 é: " << gradebook2.getCourseName() << endl;

	return 0;
}