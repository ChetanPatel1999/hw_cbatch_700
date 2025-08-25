#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 6; i++) // 3
    {
        for (s = i; s < 6; s++) // 1
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) // 1
        {
            if (j == 1 || i == 4 || j == i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}