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
    struct pen p1;
    printf("enter pen info : \n");
    printf("enter name : ");
    scanf("%s", p1.name);
    printf("enter price : ");
    scanf("%d", &p1.price);
    printf("enter rating : ");
    scanf("%f", &p1.rating);

    printf("pen1 info : \n");
    printf("pen name : %s\n", p1.name);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);
    printf("--------------------------\n");
}