// wap to copy one array element into another array.
#include <stdio.h>
void main()
{
    int arr1[5] = {12, 34, 56, 78, 90};
    int arr2[5];
    int i;
    // code for copy one array into another array
    for (i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("arr1 elements : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\narr2 elements : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
}