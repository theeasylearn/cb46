/*
     1, -2, 3, -4, 5, -6
     1   2  3   4  5   6
     1) create variable count store 1 in it
     2)   check count is odd or even
     3) if count is odd then display count as it is
        otherwise display count as negative value
     4) increase count by 1
     5) repeat step 2 to 5 upto 10

*/
#include <stdio.h>
void main()
{
    int count = 1;
    while(count<=100)
    {
        if (count % 2 != 0) // odd
        {
            printf(" %d ", count);
        }
        else
        {
            count = -count;
            printf(" %d ", count);
            count = -count;
        }
        count++;
    }
}