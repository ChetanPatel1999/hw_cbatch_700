// wap to take two matrix from user and add both matrix .
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter coulmn : ");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c], mat3[r][c];
    int i, j;
    printf("enter matrix1 elements : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++)
        {
            printf("enter matrix element position[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("enter matrix2 elements : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++)
        {
            printf("enter matrix element position[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("display matrix1 element:  \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("display matrix2 element:  \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    // some two matrix code
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("summatrix  element:  \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}