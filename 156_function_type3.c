// with return type , with parameter
#include <stdio.h>
#include <math.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int res;
    res = add(12, 6);
    printf("sum = %d\n", res);

    printf("sum = %d\n", add(5, 25));

    int ans = pow(5, 3);
    printf("power of 3 of 5 = %d", ans);
}