#include <iostream>
#include "Stack.h"
#include "..\Calculator\Calculator.h"
using namespace std;
//����� ����������

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
void Main()
{
	TCalculator tcal;
	setlocale(LC_ALL, "Russian");
	while (1) {
		cout << "������� ������" << endl;
		tcal.SetInfix();
		if (!(tcal.CheckBrackets()))
			cout << "������� ����������� ������" << endl;
		if (!(tcal.CheckOperator()))
			cout << "����������� ������� ��������" << endl;
		if (tcal.CheckBrackets() && tcal.CheckOperator())
		{
			tcal.ToPostfix();
			cout << "�����: " << tcal.Calculator() << endl;;
		}
	}
	system("pause");
}

