// nested example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++) //2
    {
        for (j = 1; j <= 4; j++)//5    // 1 0 1 0
        {
            if (j % 2 == 0)
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
