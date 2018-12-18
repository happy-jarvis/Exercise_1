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
	void check_tail(int ID);
	void fill(string name, string post, int year, int ID); // заполнение списка
	void show(int ID);
	void sorting();
	void swap(Worker & object_1, Worker & object_2);
	void operator+=(Worker &object);
	void operator-=(int ID);
	void delete_1(int ID, Node *temp, Node *temp_prev, Node *temp_next);
	void delete_2(int ID, Node *temp);
	void delete_3(int ID,  Node *temp, Node *temp_prev);
	void special_show(int expiriense);
};
