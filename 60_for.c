// wap to print sum of 1 to 10.
#include <stdio.h>
void main()
{
    int i, res = 0, n;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        res = res + i;
    }
    printf("sum of 1 to %d = %d", n, res);
}