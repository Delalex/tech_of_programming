#include "main_library.h"

// ���������� ������������� �������� � �������

int GetMax(int n, int* arr)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max) // ���������� ���������
        {
            max = arr[i]; 
        }
    }

    return max;
}