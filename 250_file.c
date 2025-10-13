// fscanf():- its read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char str[20];
    ptr = fopen("facto.txt", "r");
    int stop;
    while (1)
    {
        stop = fscanf(ptr, "%s", str);
        if (stop == -1)
        {
            break;
        }
        printf("%s ", str);
    }
    fclose(ptr);
}