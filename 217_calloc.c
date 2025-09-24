// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n;
    int *ptr, *temp; // 400
    printf("enter  dynamic array size : ");
    scanf("%d", &n); // 8
    ptr = (int *)calloc(n, sizeof(int));
    temp = ptr;
    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = temp;
    printf("array elements are : ");
    for (i = 0; i < n; i++) // 5
    {
        printf("%d ", *ptr); //
        ptr++;               // 424
    }

    ptr = temp;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum of all array elemenet : %d ", sum);
    ptr = temp;
    free(ptr);
}