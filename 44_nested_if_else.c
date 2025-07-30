// club project
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 16
    if (age >= 18)
    {
        printf("welcome to club...\n");
        printf("club menue :-\n");
        printf("1. noodles : 60\n");
        printf("2. sandwitch : 120\n");
        printf("3. cold coffee : 50\n");
        printf("please order : ");
        scanf("%d", &order);
        if (order == 1)
        {
            printf("your noodles is orderd please pay 60 rs");
        }
        else if (order == 2)
        {
            printf("your sandwitch is orderd please pay 120 rs");
        }
        else if (order == 3)
        {
            printf("your cold coffee is orderd please pay 50 rs ");
        }
        else
        {
            printf("invalid choise");
        }
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}