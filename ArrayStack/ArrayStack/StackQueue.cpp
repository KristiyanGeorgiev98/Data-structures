#include "StaticQueue.h"
#include <fstream>
#include<iostream>

template<typename T>
StaticQueue<T>::StaticQueue():Array()
{
	back = 0;
}
template <typename T>
T StaticQueue<T>::head() const {
	if (empty()) {
		cerr << "Опашката е празна!\n";
		return T();
	}
	return arr[front];
}
template<typename T>
void StaticQueue<T>::push(T const& x) {
	if (full()) {
		cerr << "Опашката е пълна!\n";
		return;
	}
	arr[back] = x;
	topIndex++;
	back++;
	back = back % capacity;
}
template <typename T>
T StaticQueue<T>::pop() {
	if (empty()) {
		cerr << "Опашката е празна!\n";
		return T();
	}
	T x = arr[topIndex];
	capacity--;
	front++;
	front = front %capacity;
	return x;
}
/*
template<typename T>
istream& operator>>(istream & is, StaticQueue<T> & q)
{
	int numberElements;
	is >> numberElements;
	T elem;
	for (int i = 0; i < numberElements; i++)
	{
		is >> elem;
		q.push(elem);
	}
	return is;
}

template<typename T>
ostream & operator<<(ostream & os, StaticQueue<T> & q)
{
	T elem;
	StaticQueue<T> temp = q;
	while (!temp.empty())
	{
		temp.pop(elem);
		os << elem << " ";
	}
	os << endl;
	return os;
}

template<typename T>
ifstream& operator>>(ifstream &ifs, StaticQueue<T>& q)
{
	T elem;
	while (ifs >> elem)
	{
		q.push(elem);
	}
	return ifs;
}

template<typename T>
ofstream& operator<<(ofstream & ofs, StaticQueue<T>& q)
{
	StaticQueue<T> temp = q;
	T elem;
	while (!temp.empty())
	{
		temp.pop(elem);
		ofs << elem << " ";
	}
	ofs << endl;
}
*/