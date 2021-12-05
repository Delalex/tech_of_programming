#pragma once
#include "main_library.h"

// Нахождение кол-ва максимальных эл-тов

template<typename T>
int CountMax(T* arr, int* IndexOfMax, int n, int max)
{
    int count_max = 0, k = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            count_max += 1;
            IndexOfMax[k] = i;
            k++;
        }
        else
        {
            IndexOfMax[k] = -1;
            k++;
        }
    }

    return count_max;
}