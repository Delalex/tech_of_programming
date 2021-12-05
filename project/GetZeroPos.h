#pragma once

#include "main_library.h"

// Поиск позиций нулей
template<typename T>
int* GetZeroPos(int n, T* arr)
{
    int zerosPushed = 0;
    int* IndexOfZeros = new int[n];

    for (int i = 0; i < n; i++)
    {
        if (zerosPushed < 2)
        {
            if (arr[i] == 0) // добавление нуля в массив с индексами всех нулей
            {
                zerosPushed += 1;
                IndexOfZeros[i] = i;
            }
            else
            {
                IndexOfZeros[i] = -1;
            }

        }
        
    }

    return IndexOfZeros;
}
