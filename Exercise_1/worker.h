#pragma once

#include "header.h"

class Worker
{
private:
	string name;
	string post;
	int year;
public:
	Worker();
	void set(string name, string post, int year);
	void get(int ID);
	string get_surname();
	int get_experience();
	int experience();
};