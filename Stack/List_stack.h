#pragma once
#include <iostream>
template <class T>
struct TLink 
{
	T val;			// значение
	TLink *pNext;   // указательна следующий элемент
};
template <class T>
class TStack
{
	TLink *pFirst // указатель на первое звено
		TStack() { pFirst = NULL} // конструктор по умолчанию
	
};