#pragma once
#include <iostream>
#include <string>
#include <cmath>
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
	void SetInfix();
	string GetPostfix();
	bool CheckBrackets(); 
	bool CheckOperator();
	double Calculator();
	TCalculator();
	~TCalculator();
};