// wap to take matrix element and display lower tringle matrix.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter coulmn : ");
    scanf("%d", &c);
    int mat[r][c]; // 3*3
    int i, j;

    printf("enter matrix elements : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++)
        {
            printf("enter matrix element position[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("display matrix element:  \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // display lower tringle of matrix
    printf("display lower tringle matrix element:  \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++)
        {
            if (i >= j)
            {
                printf("%d ", mat[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}