// nested example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // i=6
    {
        for (j = 1; j <= 3; j++) // j=3
        {
            printf("hello world institute\n"); // 4
        }
        printf("--------------------------\n"); // 5
    }
}