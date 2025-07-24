// compound operator
#include <stdio.h>
void main()
{
    int a, b;
    a = 12;
    b = 5;
    printf("a = %d\n", a);   // 12
    printf("b = %d\n\n", b); // 5

    // a += b; // a= a+b;
    // a -= b;
    // a *= b;
    // b *= a;

    //  b *= b;

    // b += 10;         //a=12 b=5

    // a %= b;

    a /= b;

    printf("a = %d\n", a); // 2
    printf("b = %d\n", b); // 5
}