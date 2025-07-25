// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter num1 : ");
    scanf("%d", &num1); // 18
    printf("enter num2 : ");
    scanf("%d", &num2); // 121
    num1 > num2 ? printf("greatest num : %d", num1) : printf("greatest num : %d", num2);
}