/*
    write a program to findout profit/loss amount for given product's purchase and sales price

    step - 1
    create variable purchase_price, sales_price and accept input from user 
    calculate difference between sale_price & purchase price 
    if difference is negative it is loss 
    otherwise profit 
*/
#include<stdio.h>
void main()
{
    int PurchasePrice,SalesPrice,difference;
    printf("Enter Purchase Price");
    scanf("%d",&PurchasePrice);

    printf("Enter Sales Price");
    scanf("%d",&SalesPrice);

    difference = SalesPrice - PurchasePrice;
    if(difference>0) // == != < > <= >= 
    {
        printf("Profit amount is %d",difference);
    }
    else 
    {
        printf("Loss amount is %d",difference);
    }
    printf("\n good bye.");
}