#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num = 13;
    if (num % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
even:
    printf("even num");
    // return;
    exit(0);
odd:
    printf("odd num");
}