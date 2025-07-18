//write a programm to take two float number from user and display sum.
#include<stdio.h>
void main()
{
   float a,b,c;
   printf("this is addition app....\n");
   printf("enter first num = ");	
   scanf("%f",&a);
   printf("enter second num = ");	
   scanf("%f",&b);
   printf("value of a = %.1f\n",a);
   printf("value of b = %.1f\n",b);
   c=a+b;
   printf("addition = %.1f\n",c);
   printf("sum of %.1f and %.1f = %.1f \n",a,b,c); 
}
