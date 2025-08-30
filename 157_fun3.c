#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
float addfloat(float a, float b)
{
    return a + b;
}
int cube(int num)
{
    return num * num * num;
}
void main()
{
    int ans = cube(3);
    printf("cube = %d\n", ans);
    printf("sum = %d \n", add(12, 4));
    printf("sum = %.1f \n", addfloat(12.2, 4.6));
}