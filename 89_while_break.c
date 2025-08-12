// wap to serach given digit in given number.
#include <stdio.h>
void main()
{
    int d = 8, num = 78678, rem, f = 0;
    while (num > 0)
    {
        rem = num % 10;
        if (rem == d)
        {
            f = 1;
            break;
        }
        num = num / 10;
    }
    if (f == 1)
    {
        printf("digit is found");
    }
    else
    {
        printf("digit is not found");
    }
}