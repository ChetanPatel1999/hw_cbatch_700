// strrev :- its convert string in reverse string
#include <stdio.h>
#include <string.h>
void main()
{
    char s[20];
    printf("enter a string : ");
    gets(s);                    // ram
    printf("string : %s\n", s); // ram
    strrev(s);
    printf("reverse string : %s\n", s);
}