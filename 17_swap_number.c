// wap to swap two numbers using third variable.
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("before swaping ....\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // swap two number using third variable
    c = a;
    a = b;
    b = c;

    printf("after swaping ....\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}