// pre/post
#include <stdio.h>
void main()
{
    int a = 12, b;
    // b = a++; // post :- frist assign a value in b after than increase a value by 1
    b = ++a; // pre :- frist increament a value by one after than increasing value assign in b
    printf("a = %d\n", a); // 13
    printf("b = %d\n", b); // 12
}