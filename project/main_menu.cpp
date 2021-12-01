#include "main_library.h"
#include "main_S4.h"

void MainMenu()
{
	//Выбор семинара
	char seminar_picked;
	char type;

	do
	{
		//Вывод меню
		TableOfActions();

		cout << "\nEnter number of action: ";
		cin >> seminar_picked;

		switch (seminar_picked)
		{
		case'1': //Вызов семинара 3
		{
			type = choose_type();
			switch (type)
			{
			case '1': main_S3(); continue;
			case '2': main_S3(); continue;
			case '3': main_S3(); continue;
			}

			continue;
		}
		case'2': //Вызов семинара 4
		{
			type = choose_type();
			switch (type)
			{
			case '1': main_S4(1); continue;
			case '2': main_S4(1.0f); continue;
			case '3': main_S4(1.0); continue;
			}

			continue;
		}
		case'3': //Вызов семинара 5
		{
			main_S5();
			continue;
		}
		case'0': //Конец программы
		{
			break;
		}
		default: //Неверный номер действия
		{
			cout << "Wrong number!";
			continue;
		}
		}
	} while (seminar_picked != '0');

	cout << "Programm ended.\n";

}