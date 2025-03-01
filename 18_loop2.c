/*
    write a program to print below pattern
    1 4 9 16 25 ..... 1000
*/
#include <stdio.h>
void main()
{
    int num = 1, square = 0;
    while(square<961)
    {
        square = num * num; // 1
        printf("%d ", square);
        num = num + 1;
    }

    // printf("\nGood bye");
}