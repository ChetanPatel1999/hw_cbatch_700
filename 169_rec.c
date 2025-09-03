//wap to print reverse number from given number to 1.
#include <stdio.h>
void number(int num)
{
    printf("%d ", num); // 10 9 8 7 5 4 3 2 1
    if (num > 1)
    {
        number(num - 1);
    }
}
void main()
{
    number(10);
}