// wap to take array element from user and display sum of all elements.
#include <stdio.h>
void main()
{
    int arr[5];
    int i;

    printf("enter array element : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array elements are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\narray even elements are : ");
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}