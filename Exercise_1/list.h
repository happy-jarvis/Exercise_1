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
	void create(int length); // создание списка размером length
	void push(); // "проталкивание" элемента в список
	void fill(string name, string post, int year, int ID); // заполнение списка
	void show(int ID);
};
