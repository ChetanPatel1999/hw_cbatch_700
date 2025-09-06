#include <stdio.h>
void main()
{
    int a = 12;
    short int k;
    long long int n;
    char ch;
    printf("a = %d\n", a);
    printf("address of a = %d\n", &a);
    printf("size of short int = %d \n", sizeof(k));
    printf("size of int = %d \n", sizeof(int));
    printf("size of long long int = %d \n", sizeof(n));
    printf("size of char = %d \n", sizeof(ch));
    printf("size of float = %d \n", sizeof(float));
    double d;
    printf("size of double = %d \n", sizeof(d));
}