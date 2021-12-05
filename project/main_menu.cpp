#include "main_library.h"
#include "main_S3.h"
#include "main_S4.h"

void MainMenu()
{
	//����� ��������
	char seminar_picked;
	char type;

	do
	{
		//����� ����
		TableOfActions();

		cout << "\nEnter number of action: ";
		cin >> seminar_picked;

		switch (seminar_picked)
		{
		case'1': //����� �������� 3
		{
			type = choose_type();
			switch (type)
			{
			case '1': main_S3(1); continue;
			case '2': main_S3(1.0f); continue;
			case '3': main_S3(1.0); continue;
			}

			continue;
		}
		case'2': //����� �������� 4
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
		case'3': //����� �������� 5
		{
			main_S5();
			continue;
		}
		case'0': //����� ���������
		{
			break;
		}
		default: //�������� ����� ��������
		{
			cout << "Wrong number!";
			continue;
		}
		}
	} while (seminar_picked != '0');

	cout << "Programm ended.\n";

}