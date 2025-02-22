#include<stdio.h>
void main()
{
    int a,b,c,result;
    a = b = c = 10; //chain assigment 

    result = a == b && b == c; 
    printf("\n%d = %d == %d && %d == %d",result,a,b,b,c);

    b = 20;

    result = a == b || b == c;
    printf("\n%d = %d == %d || %d == %d", result, a, b, b, c);

    c = 20;
    result = a == b || b == c;
    printf("\n%d = %d == %d || %d == %d", result, a, b, b, c);
}
