// wap to print digit count of given number.
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 327
    while (num > 0)
    {
        res++; // 2
        num = num / 10;
    }
    printf("total digit in number = %d", res);
}