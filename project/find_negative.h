#pragma once
#include "main_library.h"

//���������� �����, � ������� ���� �������������-��

template<typename T> 
bool* negative_lines(T** arr, int n)
{
    bool* number = new bool[n];

    for (int i = 0; i < n; i++)
    {
        number[i] = false;

        for (int j = 0; j < n; j++)
            if (arr[i][j] < 0)
                number[i] = true;
    }

    return number;
}