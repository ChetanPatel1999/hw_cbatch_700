#include <stdio.h>
// int factorial(int num)
// {
//     static int i = 1, fact = 1;
//     fact = fact * i; // 120
//     i++;             // 7           // 6
//     if (i <= num)
//     {
//         factorial(num);
//     }
//     return fact;
// }

// int factorial(int num) // 1
// {
//     static int fact = 1;
//     fact = fact * num; // 120
//     if (num > 1)
//     {
//         factorial(num - 1);
//     }
//     return fact;
// }

int factorial(num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
void main()
{
    printf("factorial =%d\n", factorial(5));
    printf("factorial =%d\n", factorial(4));
}