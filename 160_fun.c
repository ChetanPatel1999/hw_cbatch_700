// with return type but no parameter
#include <stdio.h>
int add()
{
    int a, b, c;
    printf("enter two values : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}
void main()
{
    int res;
    res = add();
    printf("sum = %d\n", res);
    printf("sum = %d\n", add());
}