// fgets():- its take string from user
// fputs() :- its display string on terminal
#include <stdio.h>
void main()
{
    char name[5];
    printf("enter your name : ");
    fgets(name, 5, stdin);
    // printf("name = %s", name);
    fputs(name, stdout);
}