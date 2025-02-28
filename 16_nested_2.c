/*
    write a program to convert given24 hour format time into 12 hour format time
    input : 18 output 06 pm
    input : 09 output 09 am
    step
    1 declare variable hour and accept input from user
    2 check hours are in valid range or not. if not display message otherwise
    3 if hour> 12 then
        hour = hour - 12
        display time with pm
    display hour with am symbol
*/
#include <stdio.h>
void main()
{
    int hours;
    printf("Enter hours....");
    scanf("%d", &hours);
    if (hours < 0 || hours > 24)
    {
        printf("it is not valid time");
    }
    else
    {
        if (hours > 12) //== != < > <= >=
        {
            hours = hours - 12;
            printf(" %d PM", hours);
        }
        else 
        {
            printf("\n %d AM", hours);
        }
    }
}