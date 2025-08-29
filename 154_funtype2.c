// no return type but with parameters
#include <stdio.h>
void add(int a, int b, int c)
{
    int d;
    d = a + b + c;
    printf("addition : %d\n", d);
}
void cube(int num)
{
    int c;
    c = num * num * num;
    printf("cube = %d\n", c);
}

void greatest(int a, int b)
{
    if (a > b)
    {
        printf("greatest num = %d\n", a);
    }
    else
    {
        printf("greatest num = %d\n", b);
    }
}
void addfloat(float a, float b)
{
    float c;
    c = a + b;
    printf("addition : %.1f\n", c);
}

void factorial(int num) // 2
{
    int i, fact = 1;
    for (i = 1; i <= num; i++) // 2
    {
        fact = fact * i; // 720
    }
    printf("factorial = %d\n", fact);
}
void main()
{
    add(34, 7, 9);
    cube(4);
    greatest(800, 1500);
    addfloat(4.5, 7.1);
    factorial(6);
    int a = 3;
    factorial(a);

    printf("----------------------------\n");
    int i;
    for (i = 1; i <= 5; i++) // 3
    {
        factorial(i);
    }
}