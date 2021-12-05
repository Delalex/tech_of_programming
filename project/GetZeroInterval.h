#pragma once

#include "main_library.h"

// Интервал между первым и вторым нулями
template<typename T>
int GetZeroInterval(int n, T* arr)
{
    int interval = 0;
    int detectedZero = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) // обнаружение нуля
            detectedZero += 1; 

        if (arr[i] != 0 && detectedZero == 1) // увеличение интервала между нулями
        {
            interval += 1;
        }

        if (detectedZero == 2)
            break;
    }

    return interval;
}
