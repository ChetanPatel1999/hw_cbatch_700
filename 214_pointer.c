// pointer to array
#include <stdio.h>
void main()
{
    int arr[5];
    int i;
    int *ptr = &arr[0]; // 400
    printf("enter array eleement : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = &arr[0];
    printf("array elements are : ");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", *ptr); //
        ptr++;               // 424
    }
}