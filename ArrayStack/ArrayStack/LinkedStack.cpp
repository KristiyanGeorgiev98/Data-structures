#include "LinkedStack.h"
#include "Node.h"

template<typename T>
LinkedStack<T>::LinkedStack()
{
	topPointer = nullptr;
}
template<typename T>
bool LinkedStack<T>::empty()const
{
	return topPointer == nullptr;
}
template<typename T>
void LinkedStack<T>::push(T const& element)
{
	Node<T>* newElemPtr = new Node<T>;
	newElemPtr->data = element;
	newElemPtr->link = topPointer;
	topPointer = newElemPtr;

}
template<typename T>
T LinkedStack<T>::pop()
{
	if (empty())
	{
		cerr >> "Empty Stack";
		return 0;
	}
	Node<T> * tempPtr = new Node<T>;
	topPointer = topPointer.link;
	T data = topPointer.data;
	delete topPointer;
	return data;
}
template<typename T>
LinkedStack<T>::LinkedStack(LinkedStack const& stack)
{
	copyStack(stack);
}
template<typename T>
LinkedStack<T>&LinkedStack<T>::operator=(LinkedStack const& stack)
{
	if (this != &stack)
	{
		eraseStack();
		copyStack(stack);
	}
	return *this;
}
/*
template<typename T>
void LinkedStack<T>::copyStack(const LinkedStack<T>& stack)
{
	if (stack.topPointer)
	{
		Node<T>*p = stack.topPointer, *q = nullptr; *s = nullptr;
		topPointer = new Node<T>;
		topPointer.data = p->data;
		topPointer.link = q;
		q = start;
		p = p->link;
		while (p)
		{
			s = new Node<T>;
			s.data = p->data;
			q->link = s;
			q = s;
			p = p->link;
		}
		q->link = nullptr;
	}
	else start = null;
}
*/
template<typename T>
T LinkedStack<T>::top()const
{
	if (empty())
	{
		cerr >> "Empty Stack";
		return 0;
	}
	return topPointer.data;
}
template<typename T>
void LinkedStack<T>::eraseStack()
{
	while (!empty())
	{
		pop();
	}
}
template<typename T>
LinkedStack<T>::~LinkedStack()
{
	eraseStack();
}
template<typename T>
void LinkedStack<T>::copyStack(LinkedStack const& stack)
{
	topPointer = nullptr;
	copy(stack.topPointer);
}
template<typename T>
void LinkedStack<T>::copy(Node<T>* elemPtr)
{
	if (elemPtr == nullptr)
	{
		return;
	}
	copy(elemPtr->link);
	push(elemPtr->data);

}