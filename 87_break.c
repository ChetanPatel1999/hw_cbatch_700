// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int num, i, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 444
    for (i = 1; i <= num; i++)
    {
        printf("%d \n", i);
        if (num % i == 0)
        {
            c++;
        }
        if (c > 2)
        {
            break;
        }
    }
    if (c == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}