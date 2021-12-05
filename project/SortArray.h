#pragma once

#include "main_library.h"

// Эта ф-ция сортирует вектор по заданному условию
template<typename T>
T* SortArray(T * arr, int n)
{
    T* arr_sorted = new T[n];
    int k = 0;

    for (int i = 0; i < n; i++) // Проверка четности
    {
        int isEven = i % 2;
        if (isEven == 1) // Нечетная позиция
        {
            arr_sorted[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < n; i++)  // Проверка четности
    {
        int isEven = i % 2;
        if (isEven == 0) // Четная позиция
        {
            arr_sorted[k] = arr[i];
            k++;
        }
    }
    cout << endl;

    return arr_sorted;
}
