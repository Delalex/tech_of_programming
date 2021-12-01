#include "main_library.h"

char choose_type()
{
	char type;

	cout << "----------------------------------------\n";
	cout << "Firstly choose data type:\n";
	cout << "----------------------------------------\n";
	cout << "1 - int\n";
	cout << "2 - float\n";
	cout << "3 - double\n";
	cout << "----------------------------------------\n";

	do
	{
		cin >> type;

		if (type != '1' && type != '2' && type != '3')
			cout << "Enter correct number!\n";
		else
			break;
	} while (type != '1' && type != '2' && type != '3');

	return type;
}