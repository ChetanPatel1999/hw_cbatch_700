#include <stdio.h>
void main()
{
    int arr[5] = {3, 6, 4, 8, 7};
    int i;
    printf("array elements are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\narray even elements are : ");
    // 3, 6, 4, 8, 7
    for (i = 0; i < 5; i++) // 
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}