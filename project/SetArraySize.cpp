#include "main_library.h"
#include "Prototypes.h"

// Установка размерности массива 

int SetArraySize()
{
    int n;
    cout << "\n\nEnter array size: ";
    cin >> n; 

    while (n < 1) // Повторный ввод размерности в случае ошибки
    {
        cout << "Enter CORRECT(>1) array size: ";
        cin >> n;
    }

    return n;
}