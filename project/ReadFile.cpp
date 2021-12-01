#include "main_library.h"
#include "Prototypes.h"

void ReadFile(int lenght)
{
	ifstream file("D:\\hello.txt"); // Путь к файлу для чтения

	if (!file.is_open()) // Если файл не открыт
	{
		cout << "\nError, file is not opened";
	}
	else
	{
		int i = 0, start_pos = 0, end_pos = 0; // Переменные для поиска слов

		if (lenght == -1)
		{
			lenght = setupLenght();
		}                 
		char* text = new char[lenght];

		while (i < lenght) 
		{
			char ch = file.get(); // Посимвольное считывание символов
			text[i] = ch;
			end_pos++;
			i++;

			if (ch == ' ' || ch == '\n') // Проверка на конец слова
			{
				if (end_pos - start_pos < 6) // Если слово короче 5 букв
				{
					for (int j = start_pos; j < end_pos; j++)
					{
						cout << text[j]; // Вывод слова
					}
				}
				start_pos = end_pos;
			}
		}

		if (end_pos - start_pos < 6) // Обработка последнего слова
		{
			for (int j = start_pos; j < end_pos; j++)
			{
				cout << text[j];
			}
		}

		delete[] text;
	}
}