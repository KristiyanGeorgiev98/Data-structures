#pragma once
#include "Node.h"
template<typename T>
class LinkedQueue
{
private:
	Node<T> *front, *back;
	void copyQueue(LinkedQueue<T> const&);
	void eraseQueue();
public:
	LinkedQueue();
	LinkedQueue(LinkedQueue<T> const&);
	LinkedQueue& operator=(LinkedQueue<T> const&);
	~LinkedQueue();
	bool empty() const;
	void push(T const& x);
	T pop();
	T head() const;
};

