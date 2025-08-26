#include <stdio.h>
void fun();     // function declaration
void display(); // function declaration
void main()
{
    printf("hi i am main function\n");
    fun();
    fun();
    printf("inside main\n");
    display();
}
void fun() // function defination
{
    printf("hi i am fun \n");
}
void display() // function defination
{
    printf("hi i am display\n");
}
