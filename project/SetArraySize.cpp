#include "main_library.h"
#include "Prototypes.h"

// ��������� ����������� ������� 

int SetArraySize()
{
    int n;
    cout << "\n\nEnter array size: ";
    cin >> n; 

    while (n < 1) // ��������� ���� ����������� � ������ ������
    {
        cout << "Enter CORRECT(>1) array size: ";
        cin >> n;
    }

    return n;
}