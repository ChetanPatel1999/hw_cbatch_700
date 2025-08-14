#include <stdio.h>
void main()
{

    int num, fact, i;
lab:
    fact = 1;
    printf("enter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", num, fact);

    printf("you do not want to continue press 1 : ");
    scanf("%d", &num);
    if (num != 1)
    {
        goto lab;
    }
}