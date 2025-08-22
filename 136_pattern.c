// nested example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) //2
    {
        for (j = 1; j <= i; j++)//5    // 1 0 1 0
        {
            if (i % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}
