#include <stdio.h>
void factorial(int num) // 2
{
    int i, fact = 1;
    for (i = 1; i <= num; i++) // 2
    {
        fact = fact * i; // 720
    }
    printf("factorial of %d = %d\n", num, fact);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 4
    {
        factorial(i);
    }
}
void main()
{
    range(1, 5);

    range(1, 10);
}