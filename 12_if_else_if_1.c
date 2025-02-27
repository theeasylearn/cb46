/*
    write a program to calculate tax amount, gross income and net income from given monthly income as per new income tax rule.
    Income Slab (Rs.)
	Income                  Tax Rate (%)
    0 - 4,00,000	        NIL
    4,00,001 - 8,00,000	    5
    8,00,001 - 12,00,000	10
    12,00,001 - 16,00,000	15
    16,00,001 - 20,00,000	20
    20,00,001 - 24,00,000	25
    Above 24,00,000	        30

    step 
    1 create variable MonthlyIncome store input from user into it. 
    2 Calculate & store GrossIncome
        GrossIncome = MonthlyIncome * 12 
    3 Calculate Tax as per slab
    4 Calculate net income 
        NetIncome = GrossIncome - Tax 
    5 Display NetIncome TaxAmount GrossIncome 
*/
#include<stdio.h>
void main()
{
    int MonthlyIncome,GrossIncome;
    float TaxAmount,NetIncome;

    printf("Enter Monthly Income");
    scanf("%d",&MonthlyIncome);

    GrossIncome = MonthlyIncome * 12;
    if(GrossIncome>2400000)
    {
        TaxAmount = GrossIncome * 0.30;
    }
    else if(GrossIncome>2000000)
    {
        TaxAmount = GrossIncome * 0.25;
    }
    else if(GrossIncome>1600000)
    {
        TaxAmount = GrossIncome * 0.20;
    }
    else if(GrossIncome>1200000)
    {
        TaxAmount = GrossIncome * 0.15;
    }
    else if(GrossIncome>800000)
    {
        TaxAmount = GrossIncome * 0.10;
    }
    else if(GrossIncome>400000)
    {
        TaxAmount = GrossIncome * 0.05;
    }
    else 
    {
        TaxAmount = 0;
    }
    NetIncome = GrossIncome - TaxAmount;
    printf("Gross Income = %d\nTax Amount = %.2f \nNet Income = %.2f",GrossIncome,TaxAmount,NetIncome);
    
}