#include "header.h"
#include "func.h"

int main()
{
	setlocale(LC_ALL, "Rus");

	int decision = 0;

	do
	{
		system("cls");
		cout
			<< "1 - Создать список и заполнить;" << endl
			<< "2 - Вывести список на экран;" << endl
			<< "3 - Добавить сотрудника;" << endl
			<< "4 - уволить сотрудника;" << endl
			<< "5 - поиск по стажу работы;" << endl
			<< "0 - завершение работы." << endl << endl;
		cin >> decision;

		switch (decision)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 0:
			break;
		default:
			cout << "Неккоректное действие! Пожалуйста, повторите попытку!";
			Sleep(970);
		}
	} while (decision != 0);

	return 0;
}