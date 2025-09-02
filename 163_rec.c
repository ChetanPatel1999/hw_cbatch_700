// wap to print a msg 5 times using recursion.
#include <stdio.h>
void fun()
{
    static int i = 1;           // its run only once time in programm
    printf("hello student \n"); // 3
    i++;                        // 4
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}