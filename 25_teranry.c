// wap to take two number from user and check numbr are same or different.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter num1 : ");
    scanf("%d", &num1);
    printf("enter num2 : ");
    scanf("%d", &num2);
    num1 == num2 ? printf("both number are same") : printf("both number are different");
}