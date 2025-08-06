// wap to print sum of individual digit of given number.
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 453
    while (num > 0)    //
    {
        rem = num % 10;  // 4
        res = res + rem; // 12
        num = num / 10;
    }
    printf("sum of individual digit  = %d", res);
}