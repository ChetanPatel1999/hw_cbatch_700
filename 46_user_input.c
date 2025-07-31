#include <stdio.h>
void main()
{
    char a, b;
    printf("enter a =");
    scanf("%c", &a); // p
    printf("enter b =");
    getchar(); // its take a char and here we use to take enter button char.
    scanf("%c", &b);
    printf("a = %c\n", a);
    printf("b = %c\n", b);
}