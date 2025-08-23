#include <stdio.h>
void main()
{
    int i, j, b = 0, a;
    for (i = 1; i <= 5; i++) // 2
    {
        a = b;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a); // 0
            a = 1 - a;
        }
        b = 1 - b;

        printf("\n");
    }
}