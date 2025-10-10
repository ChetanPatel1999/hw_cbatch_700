// "a" = its append mode symbol which used to append data in file
#include <stdio.h>
void main()
{
    FILE *pf;
    char str[] = "hello i am gouri freinds\n";
    pf = fopen("abc.txt", "a");
    fprintf(pf, "hello i am gouri\n");
    fprintf(pf, str);
    fclose(pf); 
}