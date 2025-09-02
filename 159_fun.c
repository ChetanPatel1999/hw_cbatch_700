// wap function to calulate avrege of 3 value uisng return type
// and parameter function.
#include <stdio.h>
float average(float a, float b, float c)
{
    float ave;
    ave = (a + b + c) / 3;
    return ave;
}
void main()
{
    float res;
    res = average(12, 5.3, 56);
    printf("average = %.1f", res);
}