#include "main_library.h"
#include "Prototypes.h"

char show_s5_menu()
{
	char action;

	cout << "\n\n----------------------------------------\n";
	cout << "|Pick action to execute (SEMINAR 5):   |\n";
	cout << "----------------------------------------\n";
	cout << "|1 - Enter lenght of text              |\n";
	cout << "|2 - Display Words                     |\n";
	cout << "|3 - Word Count                        |\n";
	cout << "|0 - Go to seminar picker              |\n";
	cout << "----------------------------------------\n";
	cout << "| Action: "; 
	cin >> action; 
	cout << endl;

	return action;
}