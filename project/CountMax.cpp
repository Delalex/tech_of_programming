#include "main_library.h"

// ���������� ���-�� ������������ ��-���

int CountMax(int* arr, int* IndexOfMax, int n, int max)
{
    int count_max = 0, k = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            count_max += 1;
            IndexOfMax[k] = i;
            k++;
        }
        else
        {
            IndexOfMax[k] = -1;
            k++;
        }
    }

    return count_max;
}