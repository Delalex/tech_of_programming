#pragma once
#include "main_library.h"

// Отображение отсортированного массива
template<typename T>
void DisplaySortedArray(T* arr_sorted, int n)
{
    cout << "\n--------------------\n";
    cout << "Sorted vector";
    cout << "\n--------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "[" << i << "] = " << arr_sorted[i] << endl; // вывод элемента
    }
}
