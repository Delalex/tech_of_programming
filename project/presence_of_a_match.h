#pragma once
#include "main_library.h"
#include "Compare_line_to_column.h"

template<typename T> 
void equal(T** arr, int n)
{
	bool value = false;

	for (int i = 0; i < n; i++)
	{
		value = cmp_line_column(arr, n, i);
		if (value)
			break;
	}

	if (value)
		cout << "This array has matching rows with columns\n";
	else
		cout << "There are no matching rows with columns in this array";
}