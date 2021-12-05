#pragma once

#include "main_library.h"

// �������� ����� ������ � ������ ������
template<typename T>
void showZeroInterval(int n, T* arr)
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

    if (detectedZero == 2)
        cout << "Interval between zeros = " << interval << endl;
    else
        cout << "Not enough zeros, cant find interval" << endl;
}