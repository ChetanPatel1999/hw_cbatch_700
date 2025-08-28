#include <stdio.h>
void add()
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
    int i;
    for (i = 1; i <= 5; i++)//3
    {
        add();
    }
}
