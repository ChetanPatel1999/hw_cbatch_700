// when we increase pointer value by one so its increase by 4
// if pointer type is integer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("a = %d\n", a);
    printf("&a = %d\n", &a);   // 1234
    printf("ptr = %d\n", ptr); // 1234

    ptr++; // its increase by 4

    printf("&a = %d\n", &a);   // 1234
    printf("ptr = %d\n", ptr); // 1238
    printf("*ptr = %d\n", *ptr); // 
}