// wap to reverse array element in same array.
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
    int arr[8] = {12, 45, 67, 89, 23, 4, 11, 6};
    int i, temp;
    display(arr, 8);
    // reverse array element in same array
    // 6, 11 , 4, 23, 89, 67, 45, 12
    for (i = 0; i < 8 / 2; i++) // 4
    {
        temp = arr[i]; // 89
        arr[i] = arr[8 - 1 - i];
        arr[8 - 1 - i] = temp;
    }
    display(arr, 8);
}