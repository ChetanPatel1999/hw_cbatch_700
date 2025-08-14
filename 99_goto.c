// wap to print 1 to 20 even numbers using goto stmnt.
#include <stdio.h>
void main()
{
    int i;
    i = 1;
lab:
    if (i % 2 == 0)
    {
        printf("%d ", i);
    }
    i++;
    if (i <= 20)
    {
        goto lab;
    }
}