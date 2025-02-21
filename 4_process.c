// write a program to findout area of room from user given length and width
#include<stdio.h>
void main()
{
    int length,width,area;
    printf("enter length ");
    scanf("%d",&length);

    printf("enter width");
    scanf("%d",&width);

    //process (samikaran) expression
    area = length * width;

    printf("area = %d",area);

}