// wap to print cube 1 to n(given number).
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // 2
    {
        printf("cube of %d = %d \n", i, i * i * i);
    }
}