#include "LinkedQueue.h"
#include "Node.h"

template<typename T>
LinkedQueue<T>::LinkedQueue():front(NULL),back(NULL){}

template<typename T>
LinkedQueue<T>::~LinkedQueue()
{
	eraseQueue();
}
template <typename T>
void LinkedQueue<T>::copyQueue(LinkedQueue<T> const& queue) {
	front = back = NULL;

	if (!queue.empty()) {
		QueueElement<T>* elemPtr = queue.front;

		while (elemPtr) {
			push(elemPtr->data);
			elemPtr = elemPtr->link;
		}
	}
}
template <typename T>
void LinkedQueue<T>::eraseQueue() {
	while (!empty()) {
		pop();
	}
}
template <typename T>
LinkedQueue<T>::LinkedQueue(LinkedQueue<T> const& queue) {
	front = NULL;
	back = NULL;
	copyQueue(queue);
}
template <typename T>
bool LinkedQueue<T>::empty() const {
	return back == NULL;
}template <typename T>
void LinkedQueue<T>::push(T const& x) {
	Node<T>* newElemPtr = new Node<T>;
	newElemPtr->data = x;
	newElemPtr->link = NULL;

	if (!empty()) {
		back->link = newElemPtr;
	}
	else {
		front = newElemPtr;
	}

	back = newElemPtr;
}
template <typename T>
T LinkedQueue<T>::pop() {
	if (empty()) {
		cerr << "Опит за изключване от празна опашка!\n";
		return T();
	}
	Node<T>* elemPtr = front;
	T x = elemPtr->link;
	if (elemPtr == back) {
		front = NULL;
		back = NULL;
	}
	else {
		front = front->link;
	}

	delete elemPtr;
	return x;
}
template <typename T>
T LinkedQueue<T>::head() const {
	if (empty()) {
		cerr << "Опит за поглеждане в празна опашка!\n";
		return T();
	}
	return front->data;
}
template <typename T>
void print(LinkedQueue<T> queue) {
	while (!queue.empty()) {
		cout << queue.pop() << " ";
	}
}
template <typename T>
LinkedQueue<T>& LinkedQueue<T>::operator=(LinkedQueue<T> const& queue) {
	if (this != &queue) {
		eraseQueue();
		copyQueue(queue);
	}
	return *this;
}