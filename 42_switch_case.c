//  Write a program using switch-case to print your friend's name based on the
// first letter of their name.
#include <stdio.h>
void main()
{
    char f_later;
    printf("enter frist later : ");
    scanf("%c", &f_later); // k
    switch (f_later)
    {
    case 'd':
        printf("devendra vishwkarma");
        break;
    case 'b':
        printf("balram meena");
        break;
    case 'g':
        printf("gouri bairagi");
        break;
    case 'k':
        printf("kratika goynar");
        break;
    default:
        printf("you have no friend which name start with %c", f_later);
    }
}