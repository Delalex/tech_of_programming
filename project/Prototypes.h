#pragma once

//������� ����
int main();
void MainMenu();
void TableOfActions();
char choose_type();


//������� 3
int SetArraySize();
int CatchErrors(int, int);
void DisplayZeroStats(int n, int, int, int, int, int*);
void DisplayMaxStats(int, int, int*);
char show_s3_menu();

//������� 4
void show_s4_menu();
int SetMatrixSize();
int CheckMatrixSize(int);

//������� 5
int main_S5();
void ReadFile(int);
char show_s5_menu();
int setupLenght();
void WordCount(int);
