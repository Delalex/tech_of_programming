#include "main_library.h" 

// Поиск ошибок

int CatchErrors(int zeroCount, int interval)
{
    int errorCount = 0;

    if (zeroCount == 0) // Нет нулей
    {
        errorCount += 1;
    }

    if (zeroCount == 1) // Один ноль
    {
        errorCount += 1;
    }

    if (zeroCount >= 2 && interval <= 1) // Нули слишком близко
    {
        errorCount += 1;
    }

    return errorCount;
}
