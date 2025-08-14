// goto stmnt  example
#include <stdio.h>
void main()
{
    int i;
    i = 1;
lab:
    printf("hello world institute\n");
    i++;
    if (i <= 5)
    {
        goto lab;
    }
}