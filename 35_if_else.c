// wap to check given char is vovel or consonent.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch); // k
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("char is vovle");
    }
    else
    {
        printf("char is consonent");
    }
}