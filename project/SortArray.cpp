#include "main_library.h"

// ��� �-��� ��������� ������ �� ��������� �������

int* SortArray(int* arr, int n)
{
    int* arr_sorted = new int[n];
    int k = 0;

    for (int i = 0; i < n; i++) // �������� ��������
    {
        int isEven = i % 2;
        if (isEven == 1) // �������� �������
        {
            arr_sorted[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < n; i++)  // �������� ��������
    {
        int isEven = i % 2;
        if (isEven == 0) // ������ �������
        {
            arr_sorted[k] = arr[i];
            k++;
        }
    }
    cout << endl;

    return arr_sorted;
}
