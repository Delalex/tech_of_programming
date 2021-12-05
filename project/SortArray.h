#pragma once

#include "main_library.h"

// ��� �-��� ��������� ������ �� ��������� �������
template<typename T>
T* SortArray(T * arr, int n)
{
    T* arr_sorted = new T[n];
    int k = 0;

    for (int i = 0; i < n; i++) // �������� ��������
    {
        int isEven = i % 2;
        if (isEven == 1) // �������� �������
        {
            arr_sorted[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < n; i++)  // �������� ��������
    {
        int isEven = i % 2;
        if (isEven == 0) // ������ �������
        {
            arr_sorted[k] = arr[i];
            k++;
        }
    }
    cout << endl;

    return arr_sorted;
}
