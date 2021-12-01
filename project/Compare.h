#pragma once
#include "main_library.h"
#include "Prototypes.h"

//проверка наличия повторяющихся строк

template<typename T> 
void compare(T** arr, int n)
{
    int num_of_equal = 0;

    for (int i = 0; i < n; i++)
    {
        if (cmp_line_column(arr, n, i) == true) 
        { 
            cout << "line " << i + 1 << " and column " << i + 1 << " are eqal\n";
            num_of_equal++;
        }
    }

    // Вывод в случае ненахождения одинаковых строк и столбцов.
    if (num_of_equal == 0) cout << "There is no equal lines to columns.\n"; 
}