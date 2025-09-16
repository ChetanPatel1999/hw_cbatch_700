#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    printf("array element are : \n");
    for (i = 0; i < n; i++) // 3
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void max_element(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 0; i < n; i++) // 3
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("max element : %d\n", max);
}
void main()
{
    int arr1[5] = {12, 34, 5, 2, 7};
    int arr2[8] = {5, 3, 7, 2, 7, 6, 8, 4};
    int arr3[10] = {5, 53, 77, 83, 56, 2, 7, 6, 8, 4};
    display(arr1, 5);
    max_element(arr1, 5);

    display(arr2, 8);
    max_element(arr2, 8);

    display(arr3, 10);
    max_element(arr3, 10);
}