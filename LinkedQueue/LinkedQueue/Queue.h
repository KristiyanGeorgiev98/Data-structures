#pragma once
class QueueArray
{
private:

public:
	QueueArray(int);
	void copyQueue(QueueArray const &);
	void dequeue();
	bool isEmpty();
	void deleteQueue();
	~QueueArray();
};

