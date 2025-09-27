// strcmp :- its compare two string are same or different
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[20], s2[20];
    printf("enter a string1 : ");
    gets(s1);
    printf("enter a string2 : ");
    gets(s2);
    printf("string1 : %s\n", s1); // raj
    printf("string2 : %s\n", s2); // raj

    if (strcmp(s1, s2) == 0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}