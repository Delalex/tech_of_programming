#include "main_library.h"

// Ќахождение кол-ва нулей

void showZeroCount(int n, int* arr)
{
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) // увеличение кол-ва нулей
        {
            zeroCount += 1;
        }
    }

    cout << "Count of zeros = " << zeroCount << endl;
}