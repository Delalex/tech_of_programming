#include "main_library.h"
#include "Prototypes.h"

char show_s3_menu()
{
	char action_nr = 'a';

	cout << " _____________________________________________\n";
	cout << "|Pick action to execute (SEMINAR 3):          |\n";
	cout << "|_____________________________________________|\n";
	cout << "| 1 - Get zero positions                      |\n";
	cout << "| 2 - Get zero interval                       |\n";
	cout << "| 3 - Get zero count                          |\n";
	cout << "| 4 - Get composition                         |\n";
	cout << "| 5 - Get max                                 |\n";
	cout << "| 6 - Count max                               |\n";
	cout << "| 7 - Sort Array                              |\n";
	cout << "| 8 - Show initial array                      |\n";
	cout << "|                                             |\n";
	cout << "| 0 - GO BACK TO SEMINAR PICKER               |\n";
	cout << "|_____________________________________________|\n";
	cout << "| Action: "; 
	cin >> action_nr;

	return action_nr;
}