#include <stdio.h>
#include <math.h>
int main()  
{
    int a, b, c;
    printf("If ax^2 + bx + c is quadratic equation, Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (b*b - 4*a*c >= 0)
    {
        printf("Roots are %.2f and %.2f", (-b + sqrt(b*b - 4*a*c))/((float)2*a), (-b - sqrt(b*b - 4*a*c))/((float)2*a) );
    }
    else
    {
        printf("No real roots");
    }
    return 0;
}
