//San Diego  - modificado - 24/01/2018 - 15:30
//Introdução a Orientação a Objetos com C++.
#include <string>

using std::string;

//Declarando a classe GradeBook.
class GradeBook{
public:
	//O construtor inicializa courseName com uma string passada como argumento.
	GradeBook(string, string);

	//Função responsável por guardar o nome do curso.
	void setCourseName(string);

	//Função responsável por obter o nome do curso.
	string getCourseName ();

	//Função responsável por guardar o nome do instrutor.
	void setInstructorName(string);

	//Função responsável por obter o nome do instrutor.
	string getInstructorName();

	//Função que imprime uma mensagem na tela.
	void displayMessage();

	//Calcula a média da classe de acordo com as 10 notas inseridas pelo usuário.
	void determineClassAverage();

private:
	string courseName;
	string instructorName;
};