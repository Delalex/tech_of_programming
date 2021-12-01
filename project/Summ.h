#pragma once
#include "main_library.h"
#include "find_negative.h"

//нахождение суммы в строках, где есть отрицательные
template<typename T> 
void summ(T** arr, int n)
{
    T sum;
    int num_of_lines = 0;
    bool* value = NULL;

    value = negative_lines(arr, n);

    for (int i = 0; i < n; i++)
    {
        if (!value[i])
            continue;

        num_of_lines++;
        sum = 0;

        for (int j = 0; j < n; j++) // подсчет суммы в линии с отрицательными элементами
            sum += arr[i][j];

        cout << "Sum in line " << i << ": " << sum << endl;
    }

    if (num_of_lines == 0) // Если нет линий с отрицательными элементами
        cout << "There are no lines with negative numbers.\n";
}