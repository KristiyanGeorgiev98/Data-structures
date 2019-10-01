#pragma once
#include<iostream>
using namespace std;
//template <typename T>
class queue
{
private:
	int* array;
	int capacity;
	int front;
	int count;
	int back;

public:
	queue(int size);
	void dequeue();
	void enqueue(int x);
	int size();
	int peek();
	bool isEmpty()const;
	bool isFull()const;
	~queue();
};

