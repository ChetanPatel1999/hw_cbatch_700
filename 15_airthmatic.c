#include <stdio.h>
void main()
{
    int a, b, ans;
    a = 20;
    b = 15;

    ans = a % b;
    printf("modules/reminder = %d \n", ans);

    ans = a + b;
    printf("addition = %d\n", ans);

    ans = a - b;
    printf("subtraction = %d\n", ans);

    ans = a * b;
    printf("multiplication = %d\n", ans);

    ans = a / b;
    printf("division = %d\n", ans);
}