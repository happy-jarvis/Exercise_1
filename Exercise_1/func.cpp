#include "func.h"

void flush_stdin()
{
	cin.clear();
	while (cin.get() != '\n');
}

void set_worker(string &name, string &post, int &year)
{
	cout << "Введите фамилию и инициалы сотрудника: ";
	getline(cin, name);
	cout << "Введите занимаемую должность(junior, middle or senior): ";
	cin >> post;
	flush_stdin();
	cout << "Введите год поступления на работу: ";
	cin >> year;
	flush_stdin();
}

int set_length()
{
	int length;
	cout << "Введите размер списка: ";
	cin >> length;
	flush_stdin();
	return length;
}

int set_ID()
{
	int ID;
	cout << "Введите ID человека: ";
	cin >> ID;
	return ID;
}

int expiriense()
{
	int expiriense = 0;
	cout << "Введите стаж работы: ";
	cin >> expiriense;
	return expiriense;
}