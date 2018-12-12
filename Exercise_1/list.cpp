#include "list.h"

List::List()
{
	length = 0;
	head = nullptr;
	tail = nullptr;
}

List::~List()
{
	while (length != 0)
	{
		tail = head->ptrNext;
		delete head;
		head = tail;
		length--;
	}
}

List::Node::Node(Worker data, Node * ptrNext)
{
	this->data = data;
	this->ptrNext = ptrNext;
}

void List::create(int length)
{
	if (length < 1) throw "Введена неккоректная длина списка!";
	for (int i = 0; i < length; i++)
	{
		push();
	}
	this->length = length;
}

void List::push()
{
	if (head == nullptr) head = new Node();
	else
	{
		tail = head;
		while (tail->ptrNext != nullptr) tail = tail->ptrNext;
		tail->ptrNext = new Node();
	}
}

void List::fill(string name, string post, int year, int ID)
{
	if (ID == 0) tail = head;
	else tail = tail->ptrNext;
	tail->data.set(name, post, year);
}

void List::show(int ID)
{
	if (ID == 0) tail = head;
	else tail = tail->ptrNext;
	tail->data.get(ID);
}