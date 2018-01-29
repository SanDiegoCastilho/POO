//San Diego - 29/01/2018 - 08:41.
//Definição das funções da classe Date.
#include <iostream>
#include "Date.h"

using std::cout;
using std::endl;

//Construtor da Classe Date.
Date::Date(int D, int M, int Y){
	setDay(D);
	setMonth(M);
	setYear(Y);
}

//Guarda um valor para Day.
void Date::setDay(int D){
	if (D >= 1 && D <= 31)
		day = D;

	else
		day = 01;
}

//Retorna o valor Day do objeto da classe Date.
int Date::getDay(){
	return day;
}

//Guarda um valor para Month.
void Date::setMonth(int M){
	if (M >= 1 && M <=12)
		month = M;

	else
		month = 01;
}

//Retorna o valor Month do objeto da classe Month.
int Date::getMonth(){
	return month;
}

//Guarda um valor para year.
void Date::setYear(int Y){
	year = Y;
}

//Retorna o valor Year do objeto da classe Date.
int Date::getYear(){
	return year;
}

//Imprime na tela a data no formato: DD/MM/YYYY.
void Date::displayMessage(){
	cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
}