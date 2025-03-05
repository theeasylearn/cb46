/*
    write a progam to calculate & display compound interest of given amount, rate & term(year)
    step
    1) create variable amount,rate, term and store input in it.
    2) calculate interest using amount and rate for 1 year
    3) add interest into amount
    4) repeat step 2 and 3  for N Time where N = Terms
    5) Display Final Receivable amount and interest
*/
#include <stdio.h>
void main()
{
    int term, count = 1;
    float amount, rate, interest,temp;
    printf("Enter amount");
    scanf("%f", &amount);
    printf("Enter rate");
    scanf("%f", &rate);
    printf("Enter year");
    scanf("%d", &term);
    temp = amount;
    while (count <= term)
    {
        interest = (amount * rate * 1) / 100;
        amount = amount + interest;
        count++; //2
    }
    interest = amount - temp;
    printf("final receivable amount %f",amount);
    printf("\ntotal interest %f", interest);
}