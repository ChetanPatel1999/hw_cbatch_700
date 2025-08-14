#include <stdio.h>
void main()
{
    int i = 1;
    printf("hello students\n");
    i++;
    if (i >= 5)
    {
        goto lab;
    }
    printf("my hobby\n");
    printf("my dream\n");
lab:
    printf("after lable");
}