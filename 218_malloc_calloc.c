#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr1, *ptr2;
    ptr1 = (int *)malloc(5 * sizeof(int));
    ptr2 = (int *)calloc(5, sizeof(int));
    int i;
    printf("malloc array element : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr1);
        ptr1++;
    }
    printf("\ncalloc array element : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr2);
        ptr2++;
    }
}