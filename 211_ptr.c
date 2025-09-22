// we can change variable value using pointer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("a = %d\n", a);

    *ptr = 90;

    printf("a = %d\n", a);
    printf("*ptr = %d\n", *ptr);
}