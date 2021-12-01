#include "main_library.h"
#include "Prototypes.h"

int* ShowArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i << "] = " << arr[i] << endl;
	}
	
	return 0;
}