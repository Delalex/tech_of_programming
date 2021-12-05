#pragma once

#include "main_library.h"

// Произведение эл-тов между нулями
template<typename T>
int GetComposition(T* arr, int n)
{
    int isCounting = 0;
    int NoMoreCount = 0;
    int elemComp = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 && isCounting == 0 && NoMoreCount == 0) // начать пересчет эл-тов
        {
            isCounting = 1;
        }
        else if (arr[i] == 0 && isCounting == 1) // прекратить считать произведение
        {
            isCounting = 0;
            NoMoreCount = 1;
        }

        if (isCounting == 1) // перемножить эл-т
        {
            if (arr[i] != 0)
                elemComp *= arr[i];
        }
    }

    return elemComp;
}