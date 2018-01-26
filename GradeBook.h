//San Diego  - modificado - 24/01/2018 - 15:30
//Introdução a Orientação a Objetos com C++.
#include <string>

using std::string;

//Declarando a classe GradeBook.
class GradeBook{
public:
	//O construtor inicializa courseName com uma string passada como argumento.
	GradeBook(string);

	//Função responsável por guardar o nome do curso.
	void setCourseName(string);

	//Função responsável por obter o nome do curso.
	string getCourseName ();

	//Função que imprime uma mensagem na tela.
	void displayMessage();

private:
	string courseName;
};