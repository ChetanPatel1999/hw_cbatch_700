#include <stdio.h>
void main()
{
    static int i = 1;
    printf("hello student \n");
    i++;
    if (i <= 5)
    {
        main();
    }
}