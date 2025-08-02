// wap to convert decimal number in binary number.
#include <stdio.h>
void main()
{
    int deci, rem, bin = 0, b = 1;
    printf("enter a decimal number : ");
    scanf("%d", &deci); // 31
    while (deci > 0)
    {
        rem = deci % 2;
        bin = bin + rem * b;
        b = b * 10;
        deci = deci / 2;
    }
    printf("binary number = %d", bin);
}