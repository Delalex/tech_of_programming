#pragma once

#include "main_library.h"
#include "Prototypes.h"

template<typename T>
void ShowArray(T* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i << "] = " << arr[i] << endl;
	}
}