#include "main_library.h"
#include "Prototypes.h"

// задание элементов массива

int* setArray(int n)
{
    int* array = new int[n];
    int k;

    cout << "Enter array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        array[i] = k;
    }

    return array;
}