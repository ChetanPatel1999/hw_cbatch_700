// Write a program to accept a number and check if it is positive , nagative or zero.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); //-8
    if (num == 0)
    {
        printf("num is zero");
    }
    else if (num > 0)
    {
        printf("num is positive");
    }
    else
    {
        printf("num is nagative");
    }
}