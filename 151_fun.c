// Write a program to make simple calculator.
//       Press 1 to addition
//       Press 2 to subtraction
//       Press 3 to multiplication
//       Press 4 to division
#include <stdio.h>

void add()
{
    int a, b, c;
    printf("you choosed addition app...\n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition : %d\n", c);
}
void sub()
{
    int a, b, c;
    printf("you choosed sutraction app...\n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a - b;
    printf("sutraction : %d\n", c);
}
void mul()
{
    int a, b, c;
    printf("you choosed multiplication app...\n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a * b;
    printf("multiplication : %d\n", c);
}
void div()
{
    int a, b, c;
    printf("you choosed division app...\n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a / b;
    printf("division : %d\n", c);
}
void main()
{
    int num;
    printf("<----- welcome to my calculator ----->\n");
    printf("Press 1 to addition\n");
    printf("Press 2 to subtraction\n");
    printf("Press 3 to multiplication\n");
    printf("Press 4 to division\n");
    printf("press number : ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        div();
        break;
    default:
        printf("please enter 1 to 4");
    }
}