#include "main_library.h"

// ������������ ��-��� ����� ������

int GetComposition(int* arr, int n)
{
    int isCounting = 0;
    int NoMoreCount = 0;
    int elemComp = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 && isCounting == 0 && NoMoreCount == 0) // ������ �������� ��-���
        {
            isCounting = 1;
        }
        else if (arr[i] == 0 && isCounting == 1) // ���������� ������� ������������
        {
            isCounting = 0;
            NoMoreCount = 1;
        }

        if (isCounting == 1) // ����������� ��-�
        {
            if (arr[i] != 0)
                elemComp *= arr[i];
        }
    }

    return elemComp;
}