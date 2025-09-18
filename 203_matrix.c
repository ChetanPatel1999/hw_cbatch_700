// wap to take matrix element and display sum of all matrix element.
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

    // sum all element operatiron on matrix
    // 12 5
    // 15 8
    int sum = 0;
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + mat[i][j];
        }
    }
    printf("sum of matrix element is = %d", sum);
}