// wap to check given number is armstrong or not.
#include <stdio.h>
void main()
{
    int num, c = 0, rem = 0, res, temp, sum = 0, i;
    printf("enter  a  num : ");
    scanf("%d", &num); // 156
    temp = num;
    while (num > 0)
    {
        c++; // 3
        num = num / 10;
    }
    num = temp;
    while (num > 0) // 156
    {
        rem = num % 10;
        res = 1;
        for (i = 1; i <= c; i++)
        {
            res = res * rem;
        }
        sum = sum + res;
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
}