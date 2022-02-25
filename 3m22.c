#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a/2 + 1; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("%d", a);
    return 0;
}