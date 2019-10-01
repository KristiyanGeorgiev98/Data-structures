#pragma once
#include "Element.h"
class LinkedStack
{
private:
	Element * top;
public:
	LinkedStack();
	void push(int value);
	void pop();
	void display();
	bool isEmpty()const;
	~LinkedStack();
};

