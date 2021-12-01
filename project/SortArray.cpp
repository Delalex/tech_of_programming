#include "main_library.h"

// Эта ф-ция сортирует вектор по заданному условию

int* SortArray(int* arr, int n)
{
    int* arr_sorted = new int[n];
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
