// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int num, i, res = 0;
    printf("enter  a num : ");
    scanf("%d", &num); // 15
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            res++;
        }
    }

    if (res == 2)
    {
        printf("num is prime");
    }
    else
    {
        printf("num is not prime");
    }
}