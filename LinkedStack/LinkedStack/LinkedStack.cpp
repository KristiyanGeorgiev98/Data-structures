#include "LinkedStack.h"
#include "Element.h"
#include<iostream>
using namespace std;
int main()
{
	int i, j, value;
	cin >> j;
	LinkedStack stack;

	for (int i = 0; i < j; i++)
	{
		cin >> value;
		stack.push(value);
	}
	stack.display();
	cout << endl;
	stack.pop();
	stack.display();
	system("pause");
	return 0;
}


LinkedStack::LinkedStack()
{
	top = NULL;
}
bool LinkedStack::isEmpty()const
{
	return top == NULL;
}
void LinkedStack::push(int value)
{
	Element* temp = new Element;
	temp->data = value;
	temp->next = NULL;
	if (isEmpty())
	{
		top = temp;
		temp = NULL;
	}
	else
	{
		temp->next = top;
		top = temp;
		temp = NULL;

	}
}
void LinkedStack::pop()
{
	if (isEmpty())
	{
		cout << "Empty stack";
	}
	else
	{
		top = top->next;
	}
}
void LinkedStack::display()
{
	Element* temp = new Element;
	temp = top;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}
LinkedStack::~LinkedStack()
{
	delete [] top;
}
