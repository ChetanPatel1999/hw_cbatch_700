// fprintf :-  its used to write data inside file
#include <stdio.h>
void main()
{
    FILE *pf;
    char str[] = "hello i am gouri freinds";
    pf = fopen("abc.txt", "w");
    fprintf(pf, "hello i am gouri\n");
    fprintf(pf, str);
    fclose(pf); // its used to close file
}