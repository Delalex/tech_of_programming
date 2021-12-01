#include "main_library.h"

//����������� ���������� ������ ����� ���������

void DisplayZeroStats(int n, int errorCount, int elemComp, int zeroCount, int interval, int* IndexOfZeros)
{
    if (errorCount == 0) // ����� ������ ���� ������������ ��-���
    {
        cout << "--------------------\n";
        cout << "Zeros coordinates";
        cout << "\n--------------------\n";

        cout << "Composition = " << elemComp << "\n";
    }
    else
    {
        if (zeroCount == 0) // ��� �����
        {
            cout << "Composition cant be found:"; 
            cout << "\nERROR -> NO ZEROS\n";
        }

        if (zeroCount == 1) // ������ ���� ����
        {
            cout << "Composition cant be found:"; 
            cout << "\nERROR -> ONLY ONE ZERO\n";
        }

        if (zeroCount >= 2 && interval <= 1) // ���� ������� ������
        {
            cout << "Composition cant be found:"; 
            cout << "\nERROR -> ZEROS ARE TOO CLOSE\n";
        }
    }

    if (errorCount == 0) // ����� ������� �����
    {
        for (int k = 0; k < n; k++)
        {
            if (IndexOfZeros[k] != -1)
            {
                cout << k + 1 << "st zero is at pos " << IndexOfZeros[k] << endl;
            }
        }
    }

    if (errorCount == 0) // ����� ��������� ����� ����� ������� ������
    {
        cout << "Interval between zeros = " << interval << endl;
    }
}
