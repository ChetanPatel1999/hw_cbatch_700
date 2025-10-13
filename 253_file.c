// fputc() :- its used to write single char in file.
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch='P';
    ptr = fopen("abc.txt", "w");
    fputc('K', ptr);
    fputc(ch, ptr);
    fclose(ptr);
}