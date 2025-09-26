// visit each character of string using null character
#include <stdio.h>
void main()
{
    char name[] = "chetan patel";
    int i;
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        printf("%c\n", name[i]);
    }
}