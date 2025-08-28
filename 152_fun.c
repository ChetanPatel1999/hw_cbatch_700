#include <stdio.h>
void abhishek();
void balram();
void depesh()
{
    abhishek();
    printf("hi dipesh kaise ho\n");
}
void abhishek()
{
    balram();
    printf("hi abhisek kaise ho\n");
}
void balram()
{
    printf("hi balram kaise ho\n");
}
void main()
{
    printf("hi i am main\n");
    depesh();
    printf("end main function\n");
}