// strcpy :- its copy one string into another string.
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[20], s2[20];
    printf("enter a string1 : ");
    gets(s1);                     // ram
    printf("string1 : %s\n", s1); // ram
    printf("string2 : %s\n", s2); // garbage
    strcpy(s2, s1);
    printf("string1 : %s\n", s1); // ram
    printf("string2 : %s\n", s2); // ram

    strcpy(s2, "naman");
    printf("string2 : %s", s2);
}