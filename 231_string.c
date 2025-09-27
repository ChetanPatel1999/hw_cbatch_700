// strcat :- its combine two string and assign in one string.
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[20], s2[20];
    printf("enter a string1 : ");
    gets(s1);
    printf("enter a string2 : ");
    gets(s2);
    printf("string1 : %s\n", s1);
    printf("string2 : %s\n", s2);
    strcat(s1, s2);

    printf("combine string : %s ", s1);
}