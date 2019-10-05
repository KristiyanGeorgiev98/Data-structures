#pragma once
template<typename T>
class Array
{
private:
	int capacity;
	T* arr;
	int topIndex;

	bool full() const; 
	void resize()=0; 
	void copy(T const*); 
	void eraseArray(); 
	void copyArray(Array const&);

public:
	Array();
	Array(Array const&);
	Array& operator=(Array const&);
	bool empty() const;
	void push(T const& x)=0;
	T pop()=0;
	T top()=0;
	virtual ~Array();
};

