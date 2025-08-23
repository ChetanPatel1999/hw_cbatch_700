// nested example
#include <stdio.h>
void main()
{
    int i, j;
    i = 1;
    while (i <= 5) // 2
    {
        j = 1;
        while (j <= i) // 5    // 1 0 1 0
        {
            if (i % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            j++;
        }

        printf("\n");
        i++;
    }
}
