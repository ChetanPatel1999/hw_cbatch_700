// wap to convert decimal to binary number.
#include <stdio.h>
void main()
{
    int decimalNum, rem, b = 1, binary = 0;
    printf("enter a decimal number : ");
    scanf("%d", &decimalNum); // 15
    while (decimalNum > 0)
    {
        rem = decimalNum % 2;
        binary = binary + rem * b;
        b = b * 10;
        decimalNum = decimalNum / 2;
    }
    printf("binary number = %d", binary);
}