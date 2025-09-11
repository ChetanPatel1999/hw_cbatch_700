// wap to display array element in reverse order.
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

    printf("\narray elemenet in reverse order : ");
    for (i = n - 1; i >= 0; i--) // -1
    {
        printf("%d ", arr[i]);
    }
}