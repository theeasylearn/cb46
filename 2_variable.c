#include<stdio.h>
void main()
{   
    //immediately after { braces we must create variable
    int age=30;
    float weight = 65.99;
    char letter = 'A';
    //display variable's value
    printf("age = %d weight = %.2f letter = %c",age,weight,letter);
    //you cant create variable here
    //change variable's value 
    age = 38;
    weight = 75.44;
    letter = 'B';

    printf("\n age = %d",age);
    printf("\n weight = %.2f",weight);
    printf("\n letter = %c",letter);


}
