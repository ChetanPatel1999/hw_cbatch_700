// nested example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--) // 5
    {
        for (j = 5; j >= i; j--) //
        {
            printf("%d ", i); //
        }
        printf("\n");
    }
}
