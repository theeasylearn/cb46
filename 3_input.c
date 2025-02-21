#include<stdio.h>
void main()
{
    //create variables
    int age;
    float weight;
    char letter;

    //take input from user using keyboard
    printf("enter your age");
    scanf("%d",&age);

    printf("enter your weight");
    scanf("%f",&weight);

    //clean standard input stream then only we can take character input.
    fflush(stdin);

    printf("enter your name' 1st letter");
    scanf("%c",&letter);

    printf("age = %d, weight = %.2f letter = %c",age,weight,letter);

}