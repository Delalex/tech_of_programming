#pragma once
#include "main_library.h"

//���� �������

template<typename T> 
T** enter(T type, int n)
{
    T** array = new T * [n];

    //���� �������
    cout << "Enter a " << n << "x" << n << " array:\n";

    for (int i = 0; i < n; i++)
    {
        array[i] = new T[n];

        for (int j = 0; j < n; j++)
            cin >> array[i][j];
    }

    return array;
}