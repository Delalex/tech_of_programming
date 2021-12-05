#pragma once

#include "main_library.h"

// ���������� ������������� �������� � �������
template<typename T>
int GetMax(int n, T* arr)
{
    T max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max) // ���������� ���������
        {
            max = arr[i]; 
        }
    }

    return max;
}