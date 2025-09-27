// strlen :- its return length of string
#include <stdio.h>
#include <string.h>
void main()
{
    char s[20];
    printf("enter a string : ");
    gets(s);
    printf("string : %s\n", s);
    printf("length of string : %d", strlen(s));
}