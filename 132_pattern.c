// nested example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++) // 5
    {
        for (j = 1; j <= (i * 2) - 1; j++) //
        {
            printf("%d ", j); //
        }
        printf("\n");
    }
}
