#include "main_library.h"

// Использовался для проверки кол-ва нулей

void DebugOutput(int* IndexOfZeros, int zeroCount)
{
    for (int i = 0; i < zeroCount; i++)
    {
        cout << "[" << i << "]= " << IndexOfZeros[i] << endl;
    }
}