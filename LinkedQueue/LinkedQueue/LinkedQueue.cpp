#include "LinkedQueue.h"
#include "Element.h"
#include<iostream>
using namespace std;
int main()
{
	LinkedQueue que;
	que.enqueue(2);
	que.enqueue(3);
	que.enqueue(4);
	que.display();
	cout << endl;
	que.dequeue();
	que.display();
	system("pause");
}

LinkedQueue::LinkedQueue()
{
	Element* front = NULL;
	Element* back = NULL;
}
bool LinkedQueue::isEmpty() const
{
	if (front == NULL && back == NULL)
	{
		return true;
	}
	else return false;
}
void LinkedQueue::enqueue(int value)
{
	Element* ptr = new Element();
	ptr->data = value;
	ptr->link = NULL;
	if (front == NULL)
	{
		front = ptr;
		back = ptr;
	}
	else
	{
		back->link = ptr;
		back = ptr;
	}
	
}
void LinkedQueue::dequeue()
{
	if (isEmpty())
	{
		cout << "Queue is empty!";
	}
	else
	{
		if (front == back)
		{
			delete front;
			front = back = NULL;
		}
		else
		{
			Element*ptr = front;
			front = front->link;
			delete ptr;
		}
	}
}
void LinkedQueue::showFront()
{
	if (isEmpty())
	{
		cout << "The queue is empty!";
	}
	else cout << front->data;
}
void LinkedQueue::display()
{
	if (isEmpty())
	{
		cout << "The queue is empty";
	}
	else
	{
		Element* ptr = front;
		while (ptr != NULL)
		{
			cout << ptr->data << " ";
			ptr = ptr->link;
		}
	}
}
LinkedQueue::~LinkedQueue()
{
	delete front;
	delete back;
}
