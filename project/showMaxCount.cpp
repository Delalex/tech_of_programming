#include "main_library.h"
#include "Prototypes.h"

// ���������� ���-�� ������������ ��-���

void showMaxCount(int* arr, int* IndexOfMax, int n, int max)
{
    int count_max = 0, k = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            count_max += 1;
            IndexOfMax[k] = i;
            k++;
        }
        else
        {
            IndexOfMax[k] = -1;
            k++;
        }
    }

    cout << "Count of max elements = " << count_max << endl;
}