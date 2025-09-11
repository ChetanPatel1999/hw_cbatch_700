// wap to display sum only even number of array.
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

    int sum = 0;
    // 12,5,3,7,9
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i]; // 12
        }
    }
    printf("\neven elements sum = %d", sum);
}