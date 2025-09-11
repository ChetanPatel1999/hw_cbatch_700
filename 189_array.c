// wap to display only positive elements from array.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n);
    int arr[n];
    int i;

    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array elements are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // now we do some operation on array

    // 12 -5   3  -7  9
    printf("\narray positive elemenets : ");
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d ", arr[i]);
        }
    }
}