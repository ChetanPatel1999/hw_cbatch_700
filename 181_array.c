// wap to display sum of all array element.
#include <stdio.h>
void main()
{
    int marks[5] = {40, 20, 30, 80, 70}, i;
    printf("student marks are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }

    int totalMarks = 0;
    for (i = 0; i < 5; i++)
    {
        totalMarks = totalMarks + marks[i]; // 240
    }
    printf("\ntotal marks = %d", totalMarks);
}