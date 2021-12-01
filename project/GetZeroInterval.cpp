#include "main_library.h"

// �������� ����� ������ � ������ ������

int GetZeroInterval(int n, int* arr)
{
    int interval = 0;
    int detectedZero = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) // ����������� ����
            detectedZero += 1; 

        if (arr[i] != 0 && detectedZero == 1) // ���������� ��������� ����� ������
        {
            interval += 1;
        }

        if (detectedZero == 2)
            break;
    }

    return interval;
}
