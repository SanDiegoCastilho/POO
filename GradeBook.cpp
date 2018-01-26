//San Diego  - modificado - 19/01/2018 - 18:17
//Introdução a Orientação a Objetos com C++.
//Criando uma classe GradeBook e imprimir uma mensagem na tela.
#include <iostream>
#include "GradeBook.h"

using std::cout;
using std::endl;

//O construtor inicializa courseName com uma string passada como argumento.
GradeBook::GradeBook(string name){
	setCourseName(name);
}

//Função responsável por guardar o nome do curso.
void GradeBook::setCourseName(string name){
	courseName = name; //Armazena o nome do curso no objeto.
}

//Função responsável por obter o nome do curso.
string GradeBook::getCourseName (){
	return courseName; //Retorna o courseName do objeto.
}

//Função que imprime uma mensagem na tela.
void displayMessage(){
	cout << "Welcome To The Grade Book!\n" << endl;

}