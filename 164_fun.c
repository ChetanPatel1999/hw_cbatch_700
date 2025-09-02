// wap to print number 1 to 10 using recursion.
#include <stdio.h>
void fun()
{
    static int i = 1;
    printf("%d \n", i); // 1 2 3
    i++;                // 4
    if (i <= 10)
    {
        fun();
    }
}
void main()
{
    fun();
}