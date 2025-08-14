#include <stdio.h>
void main()
{
    while (1)
    {
        int num, fact = 1, i;
        printf("enter a num : ");
        scanf("%d", &num);
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("factorial of %d = %d\n", num, fact);

        printf("you do not want to continue press 1 : ");
        scanf("%d", &num);
        if (num == 1)
        {
            break;
        }
    }
}