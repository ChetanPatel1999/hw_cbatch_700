#include <stdio.h>
void add() // function defination
{
    int a, b, c;
    printf("enter value of a = ");
    scanf("%d", &a);
    printf("enter value of b = ");
    scanf("%d", &b);
    c = a + b;
    printf("addition : %d\n", c);
}
void main()
{
    printf("this is main function\n");
    add(); // function calling
    add();
    printf("end main function");
}
