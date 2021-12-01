#include "main_library.h"

// Нахождение максимального значения в массиве

void showMax(int n, int* arr)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max) // присвоение максимума
        {
            max = arr[i];
        }
    }

    cout << "Maximal element = " << max << endl;
}