// wap to take array element from user and make to array
//  one of even array and one of odd array.
#include <stdio.h>
void main()
{
    int arr[8] = {5, 9, 7, 127, 8, 6, 11, 22};
    int evenarr[8];
    int oddarr[8];
    int i, e = 0, o = 0;

    // code for assigne even element in even array or odd lement in odd array

    for (i = 0; i < 8; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenarr[e] = arr[i];
            e++;
        }
        else
        {
            oddarr[o] = arr[i];
            o++;
        }
    }
    printf("arr elements : ");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nevenarr elements : ");
    for (i = 0; i < e; i++)
    {
        printf("%d ", evenarr[i]);
    }
    printf("\noddarr elements : ");
    for (i = 0; i < o; i++)
    {
        printf("%d ", oddarr[i]);
    }
}
