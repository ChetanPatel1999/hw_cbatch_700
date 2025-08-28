// no return type no paramter
#include <stdio.h>
void add()
{
    int a, b, c;
    printf("you choosed addition app...\n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition : %d\n", c);
}

void cube()
{
    int num, c;
    printf("enter a num : ");
    scanf("%d", &num);
    c = num * num * num;
    printf("cube = %d\n", c);
}
void greatest()
{
    int a, b;
    printf("enter value of a : ");
    scanf("%d", &a);
    printf("enter value of b : ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("greatest num = %d", a);
    }
    else
    {
        printf("greatest num = %d", b);
    }
}
void addfloat()
{
    float a, b, c;
    printf("you choosed addition app...\n");
    printf("enter first num : ");
    scanf("%f", &a);
    printf("enter second num : ");
    scanf("%f", &b);
    c = a + b;
    printf("addition : %.1f\n", c);
}
void main()
{
    cube();
    greatest();
}