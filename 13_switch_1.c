/*
    write a program to display give day of week's Name also display days and night choghadiya
    day = 1 then display monday 
    day = 7 then display Sunday

    step 
        1 create variable dayOfweek and store user input in it. 
        2 use decision making to decide name of day and days and night choghadiya
        use below link for choghadiyas
        https://chatgpt.com/share/67c1992d-6a98-800c-afe9-7f8a058ff919
*/
#include<stdio.h>
void main()
{
    int DayOfWeek;
    printf("Enter day of week (1 to 7)");
    scanf("%d",&DayOfWeek);
    switch(DayOfWeek)
    {
        case 1:
        printf("Monday");
        //print days choghadiya
        //print night choghadiya
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("it is not valid day");
    }
    printf("\n Good bye");
}