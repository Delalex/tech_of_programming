#include "main_library.h"

// ������������� ��� �������� ���-�� �����

void DebugOutput(int* IndexOfZeros, int zeroCount)
{
    for (int i = 0; i < zeroCount; i++)
    {
        cout << "[" << i << "]= " << IndexOfZeros[i] << endl;
    }
}