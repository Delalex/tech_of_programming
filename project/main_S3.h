#pragma once

#include "main_library.h"
#include "Prototypes.h"
#include "templates.h"

template<typename T>
void main_S3(T type)
{
    T max;
    int n;
    int interval = 0;
    int errorCount = 0;
    int zeroCount = 0;
    T* arr = NULL;
    T* arr_sorted = NULL;
    int* IndexOfMax = NULL;


    for (char action_nr = 'a'; action_nr != '0';)
    {
        action_nr = show_s3_menu();

        if (arr == NULL && action_nr != 0)
        {
            n = SetArraySize();
            arr = setArray(type, n);
        }
         
        switch (action_nr)
        {
        case'1': showIndexOfZeros(n, arr); continue;                                                     // ����� ������� �����
        case'2': showZeroInterval(n, arr); continue;                                                     // �������� ����� ������
        case'3': showZeroCount(n, arr); continue;                                                        // ������� �����
        case'4': errorCount = CatchErrors(zeroCount, interval);                                          //�������������� ������ - ����� ������ ��� �����
                 showComposition(interval, zeroCount, errorCount, arr, n); continue;                     // ������� ������������
        case'5': max = GetMax(n, arr);
                 showMax(n, arr); continue;                                                              // ����� ������������� ��������
        case'6': max = GetMax(n, arr);
                 showMaxCount(arr, IndexOfMax,n, max); continue;                                         // ������� ������������ ���������
        case'7': arr_sorted = SortArray(arr, n);                                                         // ���������� �������
                 DisplaySortedArray(arr_sorted, n);
                 continue;
        case'8': ShowArray(arr, n); continue;                                                            // ����� ������������ �������                                                                                           
        case'0': cout << "\n\n"; break;                                                       // ����� �� ��������
        default: cout << "Please, enter correct action number: " << endl;
        }
    }

    delete[] arr;
    delete[] arr_sorted;
    delete[] IndexOfMax;
}