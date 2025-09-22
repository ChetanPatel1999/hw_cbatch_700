#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("value of a = %d\n", a);            // 12
    printf("address of a = %d\n", &a);         // 6487572
    printf("address of a by ptr = %d\n", ptr); // 6487572
    printf("value of a by ptr = %d\n", *ptr);  // 12
    printf("address of ptr = %d ", &ptr);
}
