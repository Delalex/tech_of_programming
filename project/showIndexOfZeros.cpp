#include "main_library.h"
#include "Prototypes.h"

void showIndexOfZeros(int n, int* arr)
{
    int pushedZeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (pushedZeroCount < 2)
        {
            if (arr[i] == 0)
            {
                pushedZeroCount++;
                cout << "Zero is at position " << i << endl;
            }
        }

    }

    if (pushedZeroCount == 0)
    {
        cout << "ERROR ! NO ZEROS !" << endl;
    }
}