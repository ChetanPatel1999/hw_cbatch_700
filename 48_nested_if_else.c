// wap to check he/she is eligible for marride or not if
// marital status,gender,age is given in input.
#include <stdio.h>
void main()
{
    char status;
    int age;
    printf("enter your marride status\n 's' for single \n 'm' for marride : ");
    scanf("%c", &status);
    if (status == 's' || status == 'S')
    {
        char gender;
        printf("enter gender 'M' for male\n            'F' for female :");
        scanf(" %c", &gender);
        if (gender == 'M' || gender == 'm')
        {
            printf("enter your age : ");
            scanf("%d", &age);
            if (age >= 21)
            {
                printf("you are eligible for marrige");
            }
            else
            {
                printf("you are not eligible for marrige");
            }
        }
        else if (gender == 'F' || gender == 'f')
        {
            printf("enter your age : ");
            scanf("%d", &age);
            if (age >= 18)
            {
                printf("you are eligible for marrige");
            }
            else
            {
                printf("you are not eligible for marrige");
            }
        }
        else
        {
            printf("invalid choise");
        }
    }
    else if (status == 'm' || status == 'M')
    {
        printf("you are all readdy merride");
    }
    else
    {
        printf("invalid choise");
    }
}