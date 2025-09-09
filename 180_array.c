#include <stdio.h>
void main()
{
    int arr[10] = {12, 34, 56, 78, 90, 33, 22, 5, 2, 11};
    printf("array element addresss are : \n");
    int i;
    for (i = 0; i < 10; i++) // 5
    {
        printf("%d ", &arr[i]);
    }
}