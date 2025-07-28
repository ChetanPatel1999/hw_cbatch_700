// wap to check given number in range(100-200) or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    if (num >= 100 && num <= 200)
    {
        printf("num is in range (100,200)");
    }
    else
    {
        printf("num is not in range (100,200)");
    }
}
