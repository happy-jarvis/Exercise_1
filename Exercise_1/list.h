#pragma once

#include "worker.h"

class List
{
private:
	class Node
	{
	public:
		Worker data;
		Node *ptrNext;

		Node(Worker data = Worker(), Node *ptrNext = nullptr);
	};
	int length;
	Node *head;
	Node *tail;
public:
	List();
	~List();
};
