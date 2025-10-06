#include <stdio.h>
void main()
{
    char name[20];
    printf("enter string : ");
    gets(name); // ramji
    printf("name = %s\n", name);
    int i, c = 0;
    for (i = 0; name[i] != '\0'; i++) // 3
    {
        c++;
    }
    printf("length of string = %d", c);
}