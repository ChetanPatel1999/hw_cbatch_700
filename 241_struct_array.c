#include <stdio.h>
struct pen
{
    char name[20];
    int price;
    float rating;
};
void above_5_pen(struct pen p[], int n)
{
    int i;
    printf("pen which price above then 5 rs : \n");
    for (i = 0; i < n; i++)
    {
        if (p[i].price > 5)
        {
            printf("%s\n", p[i].name);
        }
    }
}
void main()
{
    struct pen p[3];
    int i;
    for (i = 0; i < 3; i++) // 1
    {
        printf("enter pen%d info : \n", i + 1);
        printf("enter name : ");
        scanf("%s", p[i].name);
        printf("enter price : ");
        scanf("%d", &p[i].price);
        printf("enter rating : ");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\npen%d info : \n", i + 1);
        printf("pen name : %s\n", p[i].name);
        printf("pen price : %d\n", p[i].price);
        printf("pen rating : %.1f\n", p[i].rating);
        printf("--------------------------\n");
    }
    above_5_pen(p, 3);
}