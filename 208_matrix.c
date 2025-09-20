// wap to take matrix element and display right digonal.
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

    if (r == c)
    {
        // code for letf digonola matrix
        // printf("right digonal of matrix : ");
        // for (i = 0; i < r; i++) // 2
        // {
        //     printf("%d ", mat[i][(r - 1) - i]);
        // }

        printf("display left digonal of  matrix:  \n");
        for (i = 0; i < r; i++) // 2
        {
            for (j = 0; j < c; j++) //
            {
                if (i + j == r - 1)
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
    else
    {
        printf("given matrix is not square matrix");
    }
}