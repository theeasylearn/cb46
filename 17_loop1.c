/*
    write a program to print below pattern
    1 3 5 7 9 ..... 100
*/
#include <stdio.h>
void main()
{
    int num = 1;
    while(num<100) // 101<100
    {
        printf("%d ", num); //1 3 5
        num = num + 2; //5
    }
    printf("\nGood bye");
}