// wap to print factors of given number.
#include <stdio.h>
void main()
{
    int num, i;
    printf("enter  a num : ");
    scanf("%d", &num);
    printf("factors of %d = ", num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
}