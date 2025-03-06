/*
    write a program to figure out whether given number is prime or not
    step 1
    -----------------------------------
    1 create variable number store input in it
    2 create another variable divisor store 2 in it
    3 create variable reminder
    4 divide number by divisor and store reminder into reminder
    5 if reminder is zero then display message no is not prime
    6 increase divisor by 1
    7 repeat step 4 to 6 till divisor<number
*/
#include <stdio.h>
void main()
{
    int number, divisor = 2, reminder,count=0,half;
    printf("Enter number");
    scanf("%d", &number); // 5
    half = number / 2;
    while(divisor<half)
    {
        reminder = number % divisor; // 1
        if (reminder == 0)
        {
            printf("%d is not prime number", number);
            break; //break will break means stop loop
        }
        divisor++; // 3
        count++;
    }
    if(divisor==half)
        printf("%d is prime number",number);
    printf("\ncount to findout result = %d",count);
}