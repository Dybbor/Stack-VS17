#include <iostream>
#include "Stack.h"
#include "..\Calculator\Calculator.h"
using namespace std;
/*bool Check(string str)
{
	TStack <char> st(10);

	for (int i = 0; i < str.length(); i++)
		if (str[i] == '(')
			st.Push(str[i]);
		else if (str[i] == ')')
		{
			if (st.IsEmpty())
				return false;
			else
				st.Pop();
		}
	if (st.IsEmpty())
		return true;
	else
		return false;
}*/
void main()
{
	TCalculator tcal;
	setlocale(LC_ALL, "Russian");
	while (1) {
		cout << "Введите пример" << endl;
		tcal.SetInfix();
		if (!(tcal.CheckBrackets()))
			cout << "Введены неправильно скобки" << endl;
		if (!(tcal.CheckOperator()))
			cout << "Неправильно введены операции" << endl;
		if (tcal.CheckBrackets() && tcal.CheckOperator())
		{
			tcal.ToPostfix();
			cout << "Ответ: " << tcal.Calculator() << endl;;
		}
	}


	system("pause");
}

