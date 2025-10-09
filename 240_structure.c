#include <stdio.h>
#include <string.h>
struct pen
{
    char name[20]; // data member
    int price;     // data member
    float rating;  // data member
};
void main()
{
    printf("size of struct pen = %d\n",sizeof(struct pen));
    struct pen p1, p2;
    printf("enter pen1 info : \n");
    printf("enter name : ");
    scanf("%s", p1.name);
    printf("enter price : ");
    scanf("%d", &p1.price);
    printf("enter rating : ");
    scanf("%f", &p1.rating);

    printf("enter pen2 info : \n");
    printf("enter name : ");
    scanf("%s", p2.name);
    printf("enter price : ");
    scanf("%d", &p2.price);
    printf("enter rating : ");
    scanf("%f", &p2.rating);

    printf("\npen1 info : \n");
    printf("pen name : %s\n", p1.name);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);
    printf("--------------------------\n");

    printf("\npen1 info : \n");
    printf("pen name : %s\n", p2.name);
    printf("pen price : %d\n", p2.price);
    printf("pen rating : %.1f\n", p2.rating);
    printf("--------------------------\n");
}