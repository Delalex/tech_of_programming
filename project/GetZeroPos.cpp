#include "main_library.h"

// ����� ������� �����

int* GetZeroPos(int n, int* arr)
{
    int zerosPushed = 0;
    int* IndexOfZeros = new int[n];

    for (int i = 0; i < n; i++)
    {
        if (zerosPushed < 2)
        {
            if (arr[i] == 0) // ���������� ���� � ������ � ��������� ���� �����
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
