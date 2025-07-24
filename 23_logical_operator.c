// logical operator
#include <stdio.h>
void main()
{
    int ans;
    // ans = 12 > 7 && 6 == 6 && 7 > 12;
    // ans = 34 > 89 || 12 == 12;
    // ans = !(23 > 8);
    // ans = !(12 > 7 && 9 == 9);
    ans = 12 > 8 && !(12 == 7);
    printf("ans = %d", ans);
}