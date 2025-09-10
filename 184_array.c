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

    int sum = 0;
    // 3 7 5 78 5
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nsum of all elemets = %d", sum);
}