// matrix  in c language
#include <stdio.h>
void main()
{
    //      r  c
    int mat[3][3];
    int i, j;

    printf("enter matrix element : \n");
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 0
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix element are : \n");
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}