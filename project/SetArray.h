#pragma once

#include "main_library.h"
#include "Prototypes.h"

// ������� ��������� �������
template<typename T>
T* setArray(T type, int n)
{
    T* array = new T[n];
    T k;

    cout << "Enter array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        array[i] = k;
    }

    return array;
}