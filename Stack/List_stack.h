#pragma once
#include <iostream>
template <class T>
struct TLink 
{
	T val;			// ��������
	TLink *pNext;   // ����������� ��������� �������
};
template <class T>
class TStack
{
	TLink *pFirst // ��������� �� ������ �����
		TStack() { pFirst = NULL} // ����������� �� ���������
	
};