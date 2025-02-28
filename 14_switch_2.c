/*
    write a program to accept one letter from user and decide & display whether is vowel or consonants 
    step 
        1) accept one letter from user and store into letter variable
        2) if letter is a,e,i,o,u display it's vowel else it can be consonants
*/
#include<stdio.h>
void main()
{
    char letter;
    printf("Enter any 1 letter");
    scanf("%c",&letter);
    switch(letter)
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
       printf("it is vowel");
       break;
       default:
       printf("it is consonants");
    }
    printf("\n Good bye");
}