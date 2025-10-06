#include <stdio.h>
void main()
{
    char name[20];
    printf("enter string : ");
    gets(name); // abc
    printf("name = %s\n", name);
    int i;
    for (i = 0; name[i] != '\0'; i++) // 1
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }
    printf("uppercase name = %s\n", name);
}