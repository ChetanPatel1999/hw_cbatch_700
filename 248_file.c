#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("facto.txt", "a");
    int fact = 1, num, i;
    printf("enter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorila of %d = %d\n", num, fact);
    fprintf(ptr, "factorila of %d = %d\n", num, fact);
    fclose(ptr);
}