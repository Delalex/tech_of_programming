#include "main_library.h"

//Отображение информации первой части программы

void DisplayZeroStats(int n, int errorCount, int elemComp, int zeroCount, int interval, int* IndexOfZeros)
{
    if (errorCount == 0) // Вывод ошибок либо произведения эл-тов
    {
        cout << "--------------------\n";
        cout << "Zeros coordinates";
        cout << "\n--------------------\n";

        cout << "Composition = " << elemComp << "\n";
    }
    else
    {
        if (zeroCount == 0) // Нет нулей
        {
            cout << "Composition cant be found:"; 
            cout << "\nERROR -> NO ZEROS\n";
        }

        if (zeroCount == 1) // Только один ноль
        {
            cout << "Composition cant be found:"; 
            cout << "\nERROR -> ONLY ONE ZERO\n";
        }

        if (zeroCount >= 2 && interval <= 1) // Нули слишком близко
        {
            cout << "Composition cant be found:"; 
            cout << "\nERROR -> ZEROS ARE TOO CLOSE\n";
        }
    }

    if (errorCount == 0) // Вывод позиций нулей
    {
        for (int k = 0; k < n; k++)
        {
            if (IndexOfZeros[k] != -1)
            {
                cout << k + 1 << "st zero is at pos " << IndexOfZeros[k] << endl;
            }
        }
    }

    if (errorCount == 0) // Вывод интервала между двумя первыми нулями
    {
        cout << "Interval between zeros = " << interval << endl;
    }
}
