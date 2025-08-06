// wap to print sum of individual even digit of given number.
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 4352
    while (num > 0)    //
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            res = res + rem;
        }
        num = num / 10;
    }
    printf("sum of only even individual digit  = %d", res);
}