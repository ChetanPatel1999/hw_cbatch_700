// wap to print table of given number.
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num = ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf(" %d * %d = %d \n", n, i, n * i);
    }
}