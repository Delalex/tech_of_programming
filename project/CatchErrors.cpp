#include "main_library.h" 

// ����� ������

int CatchErrors(int zeroCount, int interval)
{
    int errorCount = 0;

    if (zeroCount == 0) // ��� �����
    {
        errorCount += 1;
    }

    if (zeroCount == 1) // ���� ����
    {
        errorCount += 1;
    }

    if (zeroCount >= 2 && interval <= 1) // ���� ������� ������
    {
        errorCount += 1;
    }

    return errorCount;
}
