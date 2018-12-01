#pragma once
#include <iostream>
#include <string>
#include "..\Stack\Stack.h"

using namespace std;

class TCalculator
{
private:
	string infix, postfix;
	TStack <char> StackOperation;
	TStack <double> StackNumber;
	int Priority(const char m) const;
public:
	void ToPostfix();
	void SetInfix(string _infix);
	string GetPostfix();
	double Calculator();
	TCalculator();
	~TCalculator();
};