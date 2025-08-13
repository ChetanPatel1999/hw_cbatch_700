// wap to print 1 to 30 number and skip number 13 to 17 using continue.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 30; i++) // 5
    {
        if (i > 12 && i < 18)
        {
            continue;
        }
        printf("%d ", i);
    }
}