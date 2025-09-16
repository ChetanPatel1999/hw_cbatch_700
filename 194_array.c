// wap to swap array frist element with array last element.
#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    printf("array elements are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr[5] = {12, 45, 67, 89, 23};
    int i, temp;
    display(arr, 5);
    // swap array frist element with last element
    temp = arr[0];
    arr[0] = arr[4];
    arr[4] = temp;
    display(arr, 5);
    display(arr, 5);
}