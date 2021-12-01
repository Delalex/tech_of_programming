#include "main_library.h"
#include "Prototypes.h"

int main_S5()
{
    int file_lenght = -1;

    for (char action_nr = 'a'; action_nr != '0';)
    {
        action_nr = show_s5_menu(); // вызов меню

        switch (action_nr)
        {
        case '1': { file_lenght = setupLenght(); continue; }
        case '2':
        {
            if (file_lenght == -1) 
            {
                file_lenght = setupLenght();
            }
            ReadFile(file_lenght);
            continue;
        }
        case '3':
        {
            if (file_lenght == -1)
            {
                file_lenght = setupLenght();
            }
            WordCount(file_lenght);
            continue;
        }
        case '0': break;
        default: { cout << "\nEnter correct action number !\n"; continue; }
        }
    }

    return 0;
}