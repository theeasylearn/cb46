/* 
    write a program to findout qube of given positive number 
    steps 
    ---------------------
    1 create variable number and accept input from user 
    2 check number is positive or not. if not positive convert number into positive number 
    3 findout qube of given number 
        qube = number * number * number 
    4 display qube 
*/
#include<stdio.h>
void main()
{
    int number,qube;
    printf("Enter number");
    scanf("%d",&number);
    if (number<0) // == != < > <= >=
    {
        printf("\n number is negative, so let us convert it into positive number");
        number = 0 - number; //0 - -10
    }
    qube = number * number * number;
    printf("\n qube = %d",qube);
    
}