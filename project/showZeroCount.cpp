#include "main_library.h"

// ���������� ���-�� �����

void showZeroCount(int n, int* arr)
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