// wap to print prime numer series between given range.
// 20 60
#include <stdio.h>
void main()
{
    int n, c, i, end;
    printf("enter starting range : ");
    scanf("%d", &n);
    printf("enter ending range : ");
    scanf("%d", &end);
    while (n < end) // 24
    {
        c = 0;
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d  ", n);
        }
        n++;
    }
}