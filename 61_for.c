// wap to print alphabet a to z.
#include <stdio.h>
void main()
{
    int i;
    for (i = 97; i <= 122; i++)
    {
        printf("%c ", i);
    }
    printf("\n\n");
    for (i = 'A'; i <= 'Z'; i++)
    {
        printf("%c ", i);
    }
}