//San Diego 17/01/2018 - 16:03
//Introdução a Orientação a Objetos com C++.
//Criando uma classe GradeBook e imprimir uma mensagem na tela.
#include <iostream>

using std::cout;
using std::cin;

//Declarando a classe GradeBook.
class GradeBook{
public:

	//Função que imprime uma mensagem na tela.
	void displayMessage(){
		cout << "Welcome To The Grade Book!";
	}
};

int main(){
	GradeBook myGradeBook;

	myGradeBook.displayMessage();

	return 0;
}