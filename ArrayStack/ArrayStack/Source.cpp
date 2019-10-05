#include <iostream>
#include "Array.h"
#include "Node.h"
#include "LinkedQueue.h"
#include "LinkedStack.h"
#include "StaticQueue.h"
#include "ArrayStack.h"
#include <time.h>
using namespace std;
int main()
{
	const int N = 350;
	double beg_time, end_time;
	int i;
	beg_time = clock();

	//ima nqkakvi greshki s bibliotekite i ne znam kak da gi opravq !

	/*LinkedQueue<int> linkedq;
	LinkedStack<int> linkeds;
	StaticQueue<int> staticq;
	ArrayStack<int> statis;

	for (i = 0; i < N; i++)
	{
		linkeds.push(i);
	}
	*/
	end_time = clock();
	cout << "Time for pushing " << N << " operations" << (end_time - beg_time) / CLOCKS_PER_SEC << "s. \n";

	return 0;
}