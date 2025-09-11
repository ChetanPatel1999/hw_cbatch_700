// wap to count even element in array.
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

    // 12  5   8  7  4
    int c = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            c++;
        }
    }
    printf("\ntotal even count = %d", c);
}