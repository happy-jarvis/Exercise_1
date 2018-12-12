#include "header.h"

int main()
{
	setlocale(LC_ALL, "Rus");

	int decision = 0;

	do
	{
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