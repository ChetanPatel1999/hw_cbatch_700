// wap to take array size and element from user and display them.
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
}