/*
    write a program to findout largest shape from given 2 shape's length and width
    steps 
    ------------------
    create variable length and width for shape1 and accept input from user 
    create variable length and width for shape2 and accept input from user 
    calculate & store area of first shape into area1 variable
    calculate and store area of 2nd shape into area2 variable
    compare areq1 with area2 
     if area1 is bigger then area2 1st shape is bigger 
     otherwise 2nd shape is bigger 
*/
#include<stdio.h>
void main()
{
    //declaration part 
    int length1,width1,length2,width2,area1,area2;
    printf("Enter shape 1's length");
    scanf("%d",&length1);

    printf("Enter shape 1's width");
    scanf("%d",&width1);

    printf("Enter shape 2's length");
    scanf("%d",&length2);

    printf("Enter shape 2's width");
    scanf("%d",&width2);

    area1 = length1 * width1;
    area2 = length2 * width2;

    if (area1>area2) // == != < > <= >= 
    {
        printf("1st shape is bigger then 2nd shape");
    }
    else 
    {
        printf("2nd shape is bigger then 1st shape");
    }
    printf("\n good bye.");
}