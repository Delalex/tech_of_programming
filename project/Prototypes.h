#pragma once

//главное меню
int main();
void MainMenu();
void TableOfActions();
char choose_type();


//семинар 3
void main_S3();
int GetMax(int, int*);
int CountMax(int*, int*, int, int);
int SetArraySize();
int GetZeroCount(int n, int* arr);
int* GetZeroPos(int n, int* arr);
int GetZeroInterval(int n, int*);
int CatchErrors(int, int);
int GetComposition(int*, int n);
int* SortArray(int* arr, int n);
void DisplayZeroStats(int n, int, int, int, int, int*);
void DisplayMaxStats(int, int, int*);
void DisplaySortedArray(int*, int);
char show_s3_menu();
int* setArray(int);
int* ShowArray(int*, int);
void showIndexOfZeros(int n, int* arr);
void showZeroInterval(int, int*);
void showZeroCount(int, int*);
void showComposition(int, int, int, int*, int);
void showMax(int, int*);
void showMaxCount(int* arr, int* IndexOfMax, int n, int max);

//семинар 4
void show_s4_menu();
int SetMatrixSize();
int CheckMatrixSize(int);

//семинар 5
int main_S5();
void ReadFile(int);
char show_s5_menu();
int setupLenght();
void WordCount(int);
