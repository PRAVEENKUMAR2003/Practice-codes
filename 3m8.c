#include <stdio.h>
#include <math.h>
int main()  
{
    int a;
    printf("Enter the month number: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("31");
        break;
    case 2:
        printf("28");
        break;
    case 3:
        printf("31");
        break;
    case 4:
        printf("30");
        break;
    case 5:
        printf("31");
        break;
    case 6:
        printf("30");
        break;
    case 7:
        printf("31");
        break;
    case 8:
        printf("31");
        break;
    case 9:
        printf("30");
        break;
    case 10:
        printf("31");
        break;
    case 11:
        printf("30");
        break;
    case 12:
        printf("31");
        break;  
    default:
        printf("Please Enter a valid month\n");
        break;
    }
    return 0;
}