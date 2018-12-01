#include <iostream>
#include "Stack.h"
using namespace std;
bool Check(string str)
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
}
void main()
{
	string str = "He((((llo)wor)ld))";
	cout << Check(str) << endl;
	/*TCalculator tcal;

	//while (1)
	{
		//tcal.SetInfix();
		cout << tcal.GetPostfix() << endl;;
		cout << tcal.Calculator() << endl;*/
	system("pause");
}

