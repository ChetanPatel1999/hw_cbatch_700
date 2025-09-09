// array in c langauge
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    printf("array element are : \n");
    int i;
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d\n", arr[i]);
    }

    arr[3] = 900;

    printf("arraye elemenet after change array : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d\n", arr[i]);
    }
}