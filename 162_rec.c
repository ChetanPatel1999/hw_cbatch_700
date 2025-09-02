// wap to print a msg 5 times using recursion.
#include <stdio.h>
int i = 1; // globle variable
void fun()
{
    printf("hello student \n"); // 5
    i++;                        // 6
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}