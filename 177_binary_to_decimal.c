// wap to convert binary to decimal number.
#include <stdio.h>
void main()
{
    int binary, decimal = 0, rem, b = 1;
    printf("enter a binary number : "); // 10101
    scanf("%d", &binary);               //
    while (binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * b; // 21
        b = b * 2;                   // 32
        binary = binary / 10;
    }
    printf("decimal number : %d", decimal);
}