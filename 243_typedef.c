// typedef :- its used to change tempraray name of data types.
#include <stdio.h>
typedef long long int lli;
typedef long double ld;
struct student_of_10_class_section_a
{
    int rno;
    float per;
};
typedef struct student_of_10_class_section_a s10a;
void main()
{
    s10a s1, s2;
    lli a;
    ld b;
    char c;
    short int d;
    printf("size of long long int = %d byte\n", sizeof(a));
    printf("size of long double= %d byte\n", sizeof(b));
    printf("size of char = %d byte\n", sizeof(c));
    printf("size of short int = %d byte\n", sizeof(d));
}