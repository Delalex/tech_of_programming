#pragma once

#include "main_library.h"

// Нахождение максимального значения в массиве
template<typename T>
int GetMax(int n, T* arr)
{
    T max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max) // присвоение максимума
        {
            max = arr[i]; 
        }
    }

    return max;
}