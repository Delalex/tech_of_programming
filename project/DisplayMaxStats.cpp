#include "main_library.h"

// ����� ���������� �� ������������ ���������

void DisplayMaxStats(int max, int count_max, int* IndexOfMax)
{
    cout << "\n--------------------\n";
    cout << "Max and coordinates";
    cout << "\n--------------------\n";

    cout << "Max element = " << max << endl;
    cout << "Count of such elements = " << count_max << "\n";

    for (int k = 0; k < sizeof(IndexOfMax)+1; k++) // ����� ������� ������������ ���������
    {
        if (IndexOfMax[k] != -1)
        { 
            cout << "One of max is at pos " << IndexOfMax[k] << endl;
        }
    }
}