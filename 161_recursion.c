// recursion :- when a function call itself is called recursion.
#include <stdio.h>
void fun()
{
    printf("hello student \n");
    fun(); // recursive calling
}
void main()
{
    fun();
}