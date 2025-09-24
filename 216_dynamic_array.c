// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n;
    float *ptr, *temp; // 400
    printf("enter  dynamic array size : ");
    scanf("%d", &n); // 8
    ptr = (float *)malloc(n * sizeof(float));
    temp = ptr;
    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", ptr);
        ptr++; // 420
    }

    ptr = temp;
    printf("array elements are : ");
    for (i = 0; i < n; i++) // 5
    {
        printf("%.1f ", *ptr); //
        ptr++;                 // 424
    }

    ptr = temp;
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum of all array elemenet : %.2f ", sum);
    ptr = temp;
    free(ptr);
}