// strlwr :- its convert string in lower string
#include <stdio.h>
#include <string.h>
void main()
{
    char s[20];
    printf("enter a string : ");
    gets(s);                    // ram
    printf("string : %s\n", s); // ram
    strlwr(s);
    printf("lower string : %s\n", s); // RAM
}