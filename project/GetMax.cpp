#include "main_library.h"

// Нахождение максимального значения в массиве

int GetMax(int n, int* arr)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max) // присвоение максимума
        {
            max = arr[i]; 
        }
    }

    return max;
}