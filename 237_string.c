#include <stdio.h>
#include <string.h>
void reverse(char name[])
{
    int i, n = strlen(name); // 6
    char temp;
    for (i = 0; i < (n / 2); i++) // 3
    {
        temp = name[i];
        name[i] = name[n - i - 1];
        name[n - i - 1] = temp;
    }
}
void main()
{
    char name[20];
    printf("enter string : ");
    gets(name); // abc
    printf("name = %s\n", name);
    reverse(name);
    printf("reverse name = %s\n", name);
}