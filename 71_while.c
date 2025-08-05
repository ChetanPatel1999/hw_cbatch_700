// wap to print 1 to 20 even number number
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter a num : ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d \n", n * i);
        i++;
    }
}