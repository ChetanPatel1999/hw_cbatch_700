// strupr :- its convert string in upper string
#include <stdio.h>
#include <string.h>
void main()
{
    char s[20];
    printf("enter a string : ");
    gets(s);                    // ram
    printf("string : %s\n", s); // ram
    strupr(s);
    printf("upper string : %s\n", s); // RAM
}