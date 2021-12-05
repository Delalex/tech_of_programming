#pragma once

#include "main_library.h"

// ���������� ������������� �������� � �������

template<typename T>
void showMax(int n, T* arr)
{
    T max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max) // ���������� ���������
        {
            max = arr[i];
        }
    }

    cout << "Maximal element = " << max << endl;
}