/*
    write a program to findout total hours and remaining minutes of given minutes
    minutes =  200 output Hours 3 minutes 20
        
        1) create variables minutes & hours and store input in minute. 
        2) hours = minutes / 60  210/ 60 3
        3) minutes = minutes - (hours * 60)  30
        4) display hours and minutes
        
*/
#include<stdio.h>
void main()
{
    int hours,minutes;
    printf("Enter total minutes ");
    scanf("%d",&minutes);
    hours = minutes / 60;
    minutes = minutes - (hours * 60);
    printf(" hours = %d, minutes = %d",hours,minutes);
       
}