#include <stdio.h>
int number_sum(int s, int e)
{
    int sum = 0, i;
    for (i = s; i <= e; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int factorial(int num) // 5
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void main()
{
    printf("sum 1 to 10 = %d\n", number_sum(1, 10));
    printf("sum 1 to 10 = %d\n", number_sum(15, 20));
    printf("factorial of 5 = %d ", factorial(5));
}