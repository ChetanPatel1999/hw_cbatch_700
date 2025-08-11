#include <stdio.h>
void main()
{
    int num;
    do
    {
        printf("papa please purchashed bike...\n");
        printf("if bike is not purchased so press 1 : ");
        scanf("%d", &num);
    } while (num == 1);

    printf("thanks papa for my new bike ");
}