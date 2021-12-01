#pragma once
#include "main_library.h"
#include "Prototypes.h"
#include "templates.h"

template<typename T> 
void main_S4(T type)
{
    int n = -1;
    char action_controll;
    T** array = NULL;

    show_s4_menu();

    do
    {
        cout << "\nEnter action: ";
        cin >> action_controll;

        if (array == NULL && action_controll != 1 && action_controll != 0)
        {
            n = SetMatrixSize();
            array = enter(type, n);
        }

        switch (action_controll)
        {
        case '0': break;
        case '1': n = SetMatrixSize();
            array = enter(type, n);
            continue;
        /*case '2': compare(array, n);
            continue;
        case '3': summ(array, n);
            continue;
        case '4': equal(array, n);
            continue;
        case '5': show(array, n);
            continue;*/
        default: cout << "Please, enter correct number!\n";
            continue;
        }

    } while (action_controll != '0');

    //очистка выделенной памяти
    for (int i = 0; i < n; i++)
        delete[] array[i];
    delete[] array;
}