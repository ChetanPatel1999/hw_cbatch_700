// break example
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 7
    {
        if (i > 5 || i == 7)
        {
            break;
        }
        printf("%d \n", i);
    }
}