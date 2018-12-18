﻿#include "header.h"
#include "func.h"
#include "list.h"

int main()
{
	setlocale(LC_ALL, "Rus");

	List list;
	int decision = 0;

	string temp_name = " ";
	string temp_post = " ";
	int temp_year = 0;
	int temp_length = 0;
	Worker temp;

	do
	{
		system("cls");
		cout
			<< "1 - Создать список и заполнить;" << endl
			<< "2 - Вывести список на экран;" << endl
			<< "3 - Добавить сотрудника;" << endl
			<< "4 - Уволить сотрудника;" << endl
			<< "5 - Поиск по стажу работы;" << endl
			<< "0 - Завершение работы." << endl << endl;
		cin >> decision;

		switch (decision)
		{

		case 1:
			system("cls");
			list.create(temp_length = set_length());
			for (int i = 0; i < temp_length; i++)
			{
				system("cls");
				cout << "Осталось - " << temp_length - i << endl;
				set_worker(temp_name, temp_post, temp_year);
				list.fill(temp_name, temp_post, temp_year, i);
			}
			break;

		case 2:
			system("cls");
			cout << "ID" << "\t\t\t" << "Ф.И.О." << "\t\t\t" << "\tДолжность" << "\t\t" << "Год поступления" << endl;
			list.sorting();
			for (int i = 0; i < temp_length; i++)
			{
				list.show(i);
			}
			system("pause");
			break;

		case 3:
			flush_stdin();
			temp_length++;
			set_worker(temp_name, temp_post, temp_year);
			temp.set(temp_name, temp_post, temp_year);
			list.operator+=(temp);
			break;

		case 4:
			flush_stdin();
			temp_length--;
			list.operator-=(set_ID());
			break;

		case 5:
			flush_stdin();
			list.special_show(expiriense());
			break;
		case 0:
			break;
		default:
			cout << "Неккоректное действие! Пожалуйста, повторите попытку!";
			Sleep(970);
			break;
		}
	} while (decision != 0);

	return 0;
}