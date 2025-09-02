// wap to print even number 1 to 20 using recursion.
#include <stdio.h>
void fun()
{
    static int i = 1;
    if (i % 2 == 0)
    {
        printf("%d ", i); // 1 2 3
    }
    i++; // 4
    if (i <= 20)
    {
        fun();
    }
}
void main()
{
    fun();
}