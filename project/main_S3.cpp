#include "main_library.h"
#include "Prototypes.h"

void main_S3()
{
    int max;
    int n;
    int interval = 0;
    int errorCount = 0;
    int zeroCount = 0;
    int* arr = NULL;
    int* arr_sorted = NULL;
    int* IndexOfMax = NULL;


    for (char action_nr = 'a'; action_nr != '0';)
    {
        action_nr = show_s3_menu();

        if (arr == NULL && action_nr != 0)
        {
            n = SetArraySize();
            arr = setArray(n);
        }
         
        switch (action_nr)
        {
        case'1': showIndexOfZeros(n, arr); continue;                                                     // Поиск позиций нулей
        case'2': showZeroInterval(n, arr); continue;                                                     // Интервал между нулями
        case'3': showZeroCount(n, arr); continue;                                                        // Подсчет нулей
        case'4': errorCount = CatchErrors(zeroCount, interval);                                          //Исключительные случаи - поиск ошибок при вводе
                 showComposition(interval, zeroCount, errorCount, arr, n); continue;                     // Подсчет произведения
        case'5': max = GetMax(n, arr);
                 showMax(n, arr); continue;                                                              // Поиск максимального элемента
        case'6': max = GetMax(n, arr);
                 showMaxCount(arr, IndexOfMax,n, max); continue;                                         // Подсчет максимальных элементов
        case'7': arr_sorted = SortArray(arr, n);                                                         // Сортировка массива
                 DisplaySortedArray(arr_sorted, n);
                 continue;
        case'8': ShowArray(arr, n); continue;                                                            // вывод изначального массива                                                                                           
        case'0': cout << "\n\n"; break;                                                       // Выход из семинара
        default: cout << "Please, enter correct action number: " << endl;
        }
    }

    delete[] arr;
    delete[] arr_sorted;
    delete[] IndexOfMax;
}