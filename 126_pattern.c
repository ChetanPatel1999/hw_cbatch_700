// nested example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--) //0
    {
        for (j = i; j <= 5; j++) //6
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}