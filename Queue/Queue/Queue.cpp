#include "Queue.h"
#include<iostream>
using namespace std;
int main()
{
	
}
//template <typename T>
queue::queue(int size)
{
	array = new int[size];
	capacity = size;
	front = 0;
	back = -1;
	count = 0;
}
//template <typename T>
queue::~queue()
{
	delete[]array;
}
void queue::dequeue()
{
	if (isEmpty())
	{
		cout << "No elements";
		exit(1);
	}
	front = (front + 1) % capacity;
	count--;
}
void queue()