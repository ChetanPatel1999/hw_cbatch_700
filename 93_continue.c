// wap to print 1 to 30 number and skip 6 multiple using continue.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 30; i++) // 5
    {
        if (i % 6 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }
}