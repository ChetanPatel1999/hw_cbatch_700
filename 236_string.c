#include <stdio.h>
void upper(char name[])
{
    int i;
    for (i = 0; name[i] != '\0'; i++) // 1
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }
}
void main()
{
    char name[20];
    printf("enter string : ");
    gets(name); // abc
    printf("name = %s\n", name);
    upper(name);
    printf("uppercase name = %s\n", name);
}