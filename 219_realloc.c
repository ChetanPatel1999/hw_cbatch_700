#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, n1, n2, i;
    printf("enter dyanamic array size : ");
    scanf("%d", &n1);
    ptr = (int *)malloc(n1 * sizeof(int));
    temp = ptr;
    printf("dynamic array adresses : ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }

    printf("\nenter incresing dynamic array size : ");
    scanf("%d", &n2);
    ptr = temp;
    ptr = (int *)realloc(ptr, n2 * sizeof(int));

    printf("\nincreasing dynamic array adresses : ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }  
    ptr = temp;
    free(ptr);
}