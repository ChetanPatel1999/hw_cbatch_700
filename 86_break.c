// wap to find given number in given table.
#include <stdio.h>
void main()
{
    int s, t, i, f = 0;
    printf("enter table : ");
    scanf("%d", &t); // 6
    printf("enter search number : ");
    scanf("%d", &s); // 36
    for (i = 1; i <= 10; i++)
    {
        if (t * i == s)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("num is found");
    }
    else
    {
        printf("non is not found");
    }
}