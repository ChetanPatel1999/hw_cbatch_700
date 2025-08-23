#include <stdio.h>
void main()
{
    int i, j, a = 0;
    for (i = 1; i <= 5; i++) // 2
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);//0
            a=1-a;
        }
        printf("\n");
    }
}