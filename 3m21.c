#include <stdio.h>
int main()
{
    int a, b = 0, c = 0;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Reverse number is ");
    while(a)
    {
        printf("%d", a%10);
        b += a%10;
        a /= 10;
    }
    printf("\nSum of digits is %d", b);
    return 0;
}