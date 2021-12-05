#pragma once

#include "main_library.h"

// ���������� ���-�� �����
template<typename T>
void showZeroCount(int n, T* arr)
{
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) // ���������� ���-�� �����
        {
            zeroCount += 1;
        }
    }

    cout << "Count of zeros = " << zeroCount << endl;
}