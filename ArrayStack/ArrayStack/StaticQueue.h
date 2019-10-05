#pragma once
#include "Array.h"
template<typename T>
class StaticQueue :public Array<T>
{
private:
	int back;
public:
	StaticQueue();
	T head() const;
	void push(T const&x);
	T pop();

};

