#include <stdio.h>
void table(int num)
{
    static int i = 1;
    printf("%d x %d = %d\n", num, i, num * i);
    i++;
    if (i <= 10)
    {
        table(num);
    }
}
void main()
{
    table(6);
}