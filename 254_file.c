// fputs() :- its write one line in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("abc.txt", "w");
    fputs("hello world institue",ptr);
    fclose(ptr);
}