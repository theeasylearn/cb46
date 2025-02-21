/*
    concept of relational operators
*/
#include<stdio.h>
void main()
{
    int a,b,result;
    printf("Enter value for A ");
    scanf("%d",&a);
    
    printf("Enter value for B ");
    scanf("%d",&b);
       
    //relational operators
    result = a == b; // 0=10==20
    printf("%d = %d == %d",result,a,b);

    result = a != b; // 1=10!=20
    printf("\n %d = %d != %d",result,a,b);

    result = a < b; // 1=10<20
    printf("\n %d = %d < %d",result,a,b);

    result = a > b; // 0=10>20
    printf("\n %d = %d > %d",result,a,b);

    result = a <= b; // 1=10<=20
    printf("\n %d = %d <= %d",result,a,b);

    result = a >= b; // 0 =10>=20
    printf("\n %d = %d >= %d",result,a,b);
}