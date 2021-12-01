#pragma once
#include "main_library.h"
#include "find_negative.h"

template<typename T> 
void show(T** array, int n)
{
	bool* value = NULL;
	bool is_negative_in_mass = false;

	value = negative_lines(array, n);

	for (int i = 0; i < n; i++)
		if (value[i])
			is_negative_in_mass = true;

	if (!is_negative_in_mass)
		cout << "There are no lines with negative numbers\n";
	else
		cout << "The array contains lines with negative numbers\n";

	delete[] value;
}