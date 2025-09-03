// wap to print sum number 1 to 10 using recursion.
#include <stdio.h>
int number(int num)
{
    static int i = 1, sum = 0;
    sum = sum + i; // 3
    i++;           // 11
    if (i <= num)
    {
        number(num);
    }
    return sum;
}
void main()
{
    printf("sum 1 to 10 = %d", number(10));
}