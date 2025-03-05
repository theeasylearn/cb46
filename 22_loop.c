/*
    write a program to display ascii of A to Z alphabets 
    1 create variable ascii store 97
    2 display letter and ascii value 
    3 increase ascii by 1
    4 repeat 2 to 3 steps until ascii is equal to 123
*/
#include <stdio.h>
void main()
{
    int ascii=65;
    char alphabet;
    while(ascii<91)
    {
        alphabet = ascii;
        printf("[%c = %d]    ",alphabet,ascii);
        ascii++; // 98
    }
}