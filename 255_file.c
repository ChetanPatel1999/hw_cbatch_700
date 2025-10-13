// fgets() :- its read one line from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("facto.txt", "r");
    char str[30];
    fgets(str, 30, ptr);
    printf("%s", str);
    fgets(str, 30, ptr);
    printf("%s", str);
    fclose(ptr);
}