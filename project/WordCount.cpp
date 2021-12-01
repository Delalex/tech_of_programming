#include "main_library.h"
#include "Prototypes.h"

void WordCount(int lenght)
{
	ifstream file("D:\\hello.txt"); // ���� � ����� ��� ������

	if (!file.is_open()) // ���� ���� �� ������
	{
		cout << "\nError, file is not opened";
	}
	else
	{
		int i = 0, start_pos = 0, end_pos = 0; // ���������� ��� ������ ����
		int wordCount = 0; // ���-�� ���� ��. �������

		if (lenght == -1)
		{
			lenght = setupLenght();
		}
		char* text = new char[lenght];

		while (i < lenght)
		{
			char ch = file.get(); // ������������ ���������� ��������
			text[i] = ch;
			end_pos++;
			i++;

			if (ch == ' ' || ch == '\n') // �������� �� ����� �����
			{
				if (end_pos - start_pos < 6) // ���� ����� ������ 5 ����
				{
					wordCount++;
				}
				start_pos = end_pos;
			}
		}

		if (end_pos - start_pos < 6) // ��������� ���������� �����
		{
			wordCount++;
		}

		cout << "\nWord count = " << wordCount << endl; // ����� ���-�� ���� �� �������
	}
}