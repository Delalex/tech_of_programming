#include "main_library.h"
#include "Prototypes.h"

int setupLenght()
{
	int lenght;	

	do
	{
		cout << "Enter lenght: ";
		cin >> lenght;

		if (lenght > 1)
			break;
		else 
			cout << "Enter correct (>1) lenght!\n";
	} while (lenght < 1);
	
	return lenght;
}