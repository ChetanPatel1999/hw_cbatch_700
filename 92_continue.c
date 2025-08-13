// wap to print odd number 1 to 10 using continue stmnt.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 5
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }
}