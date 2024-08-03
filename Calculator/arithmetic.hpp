#pragma once
#include <iostream>

namespace operate {
	void messageOut();
	void add();
	void subtract();
	void multiply();
	void division();
	void cases(int theVal);
	void exit();
}

namespace get {
	int num(std::string key);
	float firstValue();
	float secondValue();
	std::string string();
}

std::string basicCalc();