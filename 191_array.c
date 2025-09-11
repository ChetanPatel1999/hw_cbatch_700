// wap to find max element from array.
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

    // 9  55   88  77  4
    int max = arr[0];
    for (i = 0; i < n; i++) // 5
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nmax elemenet = %d", max);
}