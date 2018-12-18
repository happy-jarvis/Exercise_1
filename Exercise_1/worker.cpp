#include "worker.h"

Worker::Worker()
{
	name = "empty";
	post = "empty";
	year = 0;
}

void Worker::set(string name, string post, int year)
{
	this->name = name;
	this->post = post;
	this->year = year;
}

void Worker::get(int ID)
{
	cout << ID + 1 << "\t\t\t" << name << "\t\t\t" << post << "\t\t\t" << year << endl;
}

string Worker::get_surname()
{
	return name;
}

int Worker::get_experience()
{
	return year;
}

int Worker::experience()
{
	int current_year = 2018;
	int experience = current_year - get_experience();
	return experience;
}
