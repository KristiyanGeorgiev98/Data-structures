#include "ArrayStack.h"
#include "Array.h"

template<typename T>
ArrayStack<T>::ArrayStack():Array<T>()
{
}
template<typename T>
void ArrayStack<T>::push(T const& elem)
{
	if (full())
	{
		resize();
	}
	arr[++topIndex] = elem;
}
template<typename T>
void ArrayStack<T>::resize()
{
	int* oldStackPtr = arr;
	arr = new int[2 * capacity];
	copyArray(oldStackPtr);
	capacity *= 2; 
	delete[] oldStackPtr;
}
/*template<typename T>
T ArrayStack<T>::top()
{
	if (empty())
	{
		cerr >> "Empty stack";
		return T();
	}
	return arr[topIndex];
}
*/
template<typename T>
T ArrayStack<T>::pop()
{
	if (empty())
	{
		cerr >> "Empty stack";
		return T();
	}
	return arr[topIndex--];
}