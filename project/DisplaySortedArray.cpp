#include "main_library.h"

// ����������� ���������������� �������

void DisplaySortedArray(int* arr_sorted, int n)
{
    cout << "\n--------------------\n";
    cout << "Sorted vector";
    cout << "\n--------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "[" << i << "] = " << arr_sorted[i] << endl; // ����� ��������
    }
}
