#ifndef ARITHMETIC
#define ARITHMETIC
#include "Geometric.hpp"

namespace operate {
	void messageOut(); //used to invoke message that ask which operation will be used.
	void add(); //addition operation.
	void subtract(); //subtraction operation.
	void multiply(); //multiplication operation.
	void division(); //division operation.
	void cases(int theVal); // used to make condition for operations.
	void exit(); //asks the user for exit.
}

namespace get {
	int num(std::string key); //determines whether basic or advanced calculation will be use.
	float firstValue(); //gets the user input.
	float secondValue(); //gets the user input.
	std::string string(); //gets string user input via "Yes or No" operations.
}

std::string basicCalc(); //used as variable to specify which calculation in 'messageOut()' function

#endif 