#include "main_library.h"


//проверка размерности массива (д.б. меньше 8)

int CheckMatrixSize(int n)
{
    if (n > 8 || n <= 1)
    {
        do 
        {
            if (n > 8)
            {
                cout << "Enter size less then 8x8: ";
            }
            else if (n <= 1)
            {
                cout << "Enter size more then 1x1: ";
            }

            cin >> n;
        } while (n > 8 || n <= 1);
    }

    return n;
}