//San Diego  - modificado - 19/01/2018 - 18:17
//Introdução a Orientação a Objetos com C++.
//Criando uma classe GradeBook e imprimir uma mensagem na tela.
#include <iostream>
#include "GradeBook.h"

using std::cout;
using std::endl;

//O construtor inicializa courseName com uma string passada como argumento.
GradeBook::GradeBook(string nameCourse, string nameInstructor){
	setCourseName(nameCourse);
	setInstructorName(nameInstructor);
}

//Função responsável por guardar o nome do curso.
void GradeBook::setCourseName(string name){ //Valida e Armazena o nome do curso no objeto.
	
	if (name.length() <= 26){
		courseName = name; //Armazena o nome do curso no objeto.
	}

	if (name.length() > 26){
		courseName = name.substr(0, 25); //Armazena os primeiros 25 caracteres

		cout << "Name \"" << name << "\" exceeds maximum length (25). \n" 
			 << "Limiting courseName to first 25 charracteres. \n" << endl; 
	}

}
	
//Guarda o nome do instrutor.
void GradeBook::setInstructorName(string name){
	instructorName = name;
}

//Função responsável por obter o nome do curso.
string GradeBook::getCourseName (){
	return courseName; //Retorna o courseName do objeto.
}

//Retorna o nome do instrutor;
string GradeBook::getInstructorName(){
	return instructorName;
}

//Função que imprime uma mensagem na tela.
void GradeBook::displayMessage(){
	cout << "Welcome To The Grade Book!\n" << endl;
}