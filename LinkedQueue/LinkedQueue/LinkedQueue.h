#pragma once
#include"Element.h"
class LinkedQueue
{
private:
	Element * front;
	Element * back;
public:
	LinkedQueue();
	void enqueue(int);
	void dequeue();
	void showFront();
	bool isEmpty()const;
	void display();


	~LinkedQueue();
};

