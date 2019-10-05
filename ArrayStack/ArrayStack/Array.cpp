#include "Array.h"


template<typename T>
Array<T>::Array()
{
	capacity = 16;
	topIndex = -1;
	arr = new T[capacity];

}

template<typename T>
Array<T>::~Array()
{
	eraseArray();
}
template<typename T>
bool Array<T>::empty()const
{
	return topIndex == -1;
}
template<typename T>
bool Array<T>::full()const
{
	return topIndex == capacity - 1;
}
template<typename T>
void Array<T>::copy(T const* rhs)
{
	for (int i = 0; i < capacity; i++)
	{
		arr[i] = rhs[i];
	}
}
template<typename T>
void Array<T>::copyArray(Array const & rhs)
{
	topIndex = rhs.topIndex;
	capacity = rhs.capacity;
	arr = new int[capacity];
	copy(rhs.arr);
}
template<typename T>
Array<T>::Array(Array<T> const &rhs)
{
	copyArray(rhs);
}
template<typename T>
Array<T>& Array<T>::operator=(Array<T> const& rhs)
{
	if (this != &rhs)
	{
		eraseArray();
		copyArray(rhs;)
	}
	return *this;
}
template<typename T>
void Array<T>::eraseArray()
{
	delete[] arr;
}