// two matrix sum using function
//  wap to take two matrix from user and add both matrix .
#include <stdio.h>
void input_matrix(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++)
        {
            printf("enter matrix element position[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void display_matrix(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter coulmn : ");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c], mat3[r][c];

    printf("enter matrix1 elements : \n");
    input_matrix(r, c, mat1);

    printf("enter matrix2 elements : \n");
    input_matrix(r, c, mat2);

    printf("display matrix1 element:  \n");
    display_matrix(r, c, mat1);

    printf("display matrix2 element:  \n");
    display_matrix(r, c, mat2);

    // some two matrix code
    int i, j;
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("sum matrix  element:  \n");
    display_matrix(r, c, mat3);
}