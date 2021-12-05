#pragma once

#include "main_library.h"

// ������������ ��-��� ����� ������
template<typename T>
void showComposition(int interval, int zeroCount, int errorCount, T* arr, int n)
{
    int isCounting = 0;
    int NoMoreCount = 0;
    T elemComp = 1;

    if (errorCount > 0)
    {
        if (zeroCount == 0 || zeroCount == 1) // ���� �����
        {
            cout << "Error ! Not enough zeros !" << endl;
        }

        if (zeroCount >= 2 && interval <= 1) // ���� ������� ������
        {
            cout << "Error ! Too small interval !" << endl;
        }
    }
    else
    {
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

        cout << "Elements composition = " << elemComp << endl;
    }
}