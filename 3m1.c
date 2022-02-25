#include <stdio.h>
int main()  
{
    char c;
    printf("Enter a char: ");
    scanf(" %c", &c);
    if ((int)c <= (int)'z' && (int)c >= (int)'a')
    {
        printf("It is a lowercase letter!!");
    }
    else if ((int)c <= (int)'Z' && (int)c >= (int)'A')
    {
        printf("It is a uppercase letter!!");
    }
    else if ((int)c <= (int)'9' && (int)c >= (int)'0')
    {
        printf("It is a digit!!");
    }
    else
    {
        printf("It is a special character!!");
    }
    return 0;
}