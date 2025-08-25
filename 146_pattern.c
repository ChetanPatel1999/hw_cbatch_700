#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 3
    {
        for (j = 1; j <= 5; j++) // 1
        {
            if (i == j || i + j == 6)
            {
                printf("* ", j); // *        *
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}