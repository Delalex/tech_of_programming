#pragma once
#include "main_library.h"

//��������e ����� �� ���������

template<typename T> 
bool cmp_line_column(T** arr, int n, int i)
{
    bool k = true;

    for (int j = 0; j < n; j++)
    {
        if (arr[i][j] != arr[j][i])
        {
            k = false;
            break;
        }
    }

    return k;
}