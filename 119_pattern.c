// nested example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // i=2
    {
        for (j = 1; j <= 5; j++) // j=2
        {
            printf("%d ", j);// 1 2 3 4 5
        }
        printf("\n");
    }
}