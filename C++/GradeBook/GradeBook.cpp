//San Diego  - modificado - 19/01/2018 - 18:17
//Introdução a Orientação a Objetos com C++.
//Criando uma classe GradeBook e imprimir uma mensagem na tela.
#include <iostream>
#include <iomanip>
#include "GradeBook.h"

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

using std::setprecision;

//O construtor inicializa courseName com uma string passada como argumento.
GradeBook::GradeBook(string nameCourse, string nameInstructor){
	setCourseName(nameCourse);
	setInstructorName(nameInstructor);
}

//Função responsável por guardar o nome do curso.
void GradeBook::setCourseName(string name){ //Valida e Armazena o nome do curso no objeto.
	
	if (name.length() <= 26){
		courseName = name; //Armazena o nome do curso no objeto.

	}else{
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
	
//Calcula e mostra a média de 10 notas inseridas pelo usuário.
void GradeBook::determineClassAverage(){
	int total, grade = 0; //Definindo total das notas, média das notass e nota individual;
	int gradeCounter = 0; //Nota inserida pelo usuário.
	double average; //Valor da média.

	//Inicializa o valor da primeira nota.
	cout << "Digite a " << gradeCounter + 1 << "ª nota ou -1 para sair: ";
	cin >>  grade;

	//Calcula o valor total das notas e atribui à 'total'.
	while (grade != -1){
		total += grade;
		gradeCounter += 1;

		//Solicita a entrada das notas pelo usuário.
		cout << "Digite a " << gradeCounter + 1 << "ª nota ou -1 para sair: ";
		cin >>  grade;
	}

	//Calcula a média.
	if (gradeCounter != 0){
		average = static_cast<double>(total) / gradeCounter; //Converte temporariamente Total para double e calcula a´média.
	
	}

	//Mostra os resultados.
	cout << "\nTotal das " << gradeCounter <<" notas inseridas é: " << total << endl;
	cout << "A média da turma vale: " << setprecision(2) << fixed <<  average << endl;
}