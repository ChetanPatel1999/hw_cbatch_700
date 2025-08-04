// wap to check given number perfact number or not.
#include <stdio.h>
void main()
{
    int num, i, res = 0;
    printf("enter  a num : ");
    scanf("%d", &num); // 6
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            res = res + i;
        }
    }
    if (num * 2 == res)
    {
        printf("perfact number");
    }
    else
    {
        printf("not perfact number");
    }
}