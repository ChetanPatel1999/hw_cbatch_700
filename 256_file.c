// fgets() :- its read one line from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("facto.txt", "r");
    char str[30];
    while (fgets(str, 30, ptr) != NULL)
    {
        printf("%s", str);
    }
    fclose(ptr);
}