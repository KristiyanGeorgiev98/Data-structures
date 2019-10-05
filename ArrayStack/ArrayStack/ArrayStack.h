#pragma once
#include "Array.h"
template<typename T>
class ArrayStack:protected Array<T>
{

public:
	void push(T const& x);
	void resize();
	T pop();
	T top();
	ArrayStack();
	//~ArrayStack();
};

