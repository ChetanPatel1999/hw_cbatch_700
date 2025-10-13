// fscanf():- its read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char str[20];
    ptr = fopen("facto.txt", "r");
    fscanf(ptr, "%s", str);
    printf("%s ", str);
    fscanf(ptr, "%s ", str);
    printf("%s", str);
    fclose(ptr);
}