// wap to swap two numbers without using third variable.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("before swaping ....\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // swap two number without using third variable
    // a = a + b;
    // b = a - b;
    // a = a - b;

    a = a * b;
    b = a / b;
    a = a / b;

    printf("after swaping ....\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}