// wap to print count of factors of given number.
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
    printf("factors count of %d = %d", num, res);
}