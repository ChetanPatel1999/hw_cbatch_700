#include <stdio.h>
void main()
{
    int i = 0;
    while (i < 20)
    {
        i++;
        if (i % 3 == 0)
        {
            continue;
        }
        i++;
        printf("%d ", i); // 2 5 8 11 14 17 20
    }
}