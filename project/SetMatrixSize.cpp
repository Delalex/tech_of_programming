#include "main_library.h"
#include "Prototypes.h"

int SetMatrixSize()
{
	int n;

	cout << "Enter size of the array (1 number): ";
	cin >> n;

	n = CheckMatrixSize(n);    //проверка размерности массива (д.б. меньше 8)

	return n;
}