#pragma once
#include "Node.h"
template<typename T>
class LinkedStack
{
private:
	Node<T> topPointer;
	void copy(Node<T>*);
	void eraseStack();
	void copyStack(LinkedStack const&);
public:
	LinkedStack();
	LinkedStack(LinkedStack const&);
	LinkedStack& operator=(LinkedStack const &);
	~LinkedStack();
	bool empty()const;
	void push(T const&);
	T pop();
	T top()const;
};

