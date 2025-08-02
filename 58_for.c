//wap to print multiple of 3  1 to 30 .
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 30; i++) // i=7
    {
        if (i % 3 == 0) 
        {
            printf("%d ", i); // 3 6
        }
    }
}