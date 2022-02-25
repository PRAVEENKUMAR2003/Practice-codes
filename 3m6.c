#include <stdio.h>
void main()
{
    float a, b, c, d, mx, mn;
    printf("Enter 4 numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    mn = (a < b)? ((a < c)? ((a < d)?a:d) : ((c < d)?c:d)) : ((b < c)? ((b < d)?b:d) : ((c < d)?c:d));
    mx = (a > b)? ((a > c)? ((a > d)?a:d) : ((c > d)?c:d)) : ((b > c)? ((b > d)?b:d) : ((c > d)?c:d));
    printf("%.4f is difference", mx - mn);
}