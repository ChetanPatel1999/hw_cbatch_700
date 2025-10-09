#include <stdio.h>
#include <string.h>
struct pen
{
    char name[20]; // data member
    int price;     // data member
    float rating;  // data member
};
typedef struct pen pen;
void main()
{
    pen p1, p2 = {.price = 7, .rating = 2.6, .name = "goldex"}, p3 = {"hauser", 10, 4.7};
    strcpy(p1.name, "cello");
    p1.price = 5;
    p1.rating = 3.5;

    printf("pen1 info : \n");
    printf("pen name : %s\n", p1.name);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);
    printf("--------------------------\n");
    printf("pen2 info : \n");
    printf("pen name : %s\n", p2.name);
    printf("pen price : %d\n", p2.price);
    printf("pen rating : %.1f\n", p2.rating);
    printf("--------------------------\n");
    printf("pen3 info : \n");
    printf("pen name : %s\n", p3.name);
    printf("pen price : %d\n", p3.price);
    printf("pen rating : %.1f\n", p3.rating);
}