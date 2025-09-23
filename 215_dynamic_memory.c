// pointer to array
#include <stdio.h>
void main()
{
    int i;
    int *ptr, *temp; // 400
    *ptr = malloc(20);
    temp = ptr;
    printf("enter array eleement : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = temp;
    printf("array elements are : ");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", *ptr); //
        ptr++;               // 424
    }

    ptr = temp;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    ptr = temp;
    free(ptr);
}