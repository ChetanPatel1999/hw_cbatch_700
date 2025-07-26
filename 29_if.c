#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 2
    if (num == 1)
    {
        printf("good morniing ");
    }
    if (num == 2)
    {
        printf("good after noon");
    }
    if (num == 3)
    {
        printf("good evening");
    }
    if (num == 4)
    {
        printf("good night");
    }
    if (num > 4 || num <= 0)
    {
        printf("please enter 1 to 4");
    }
}