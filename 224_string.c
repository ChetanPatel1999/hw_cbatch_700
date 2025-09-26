// gets():- its take string from user
// puts() :- its display string on terminal
#include <stdio.h>
void main()
{
    char name[10];
    printf("enter your name : ");
    gets(name);
    // printf("name = %s", name);
    puts(name);
}