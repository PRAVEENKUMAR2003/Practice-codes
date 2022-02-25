
#include <stdio.h>
int main()
{
    static int a = 0;
    static int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    char c;
    printf("Enter the Arithmetic Operators in this set {+, -, *, /, %%}: ");
    scanf(" %c", &c);
    switch(c){
    case'+':
        printf("%d + %d is %d\n",x,y,x+y);
        break;
    case '/':
        printf("%d / %d is %1.2f\n",x,y,(float)x/y);
        break;
    case '-':
        printf("%d - %d is %d\n",x,y,x-y);
        break;
    case '%':
        printf("%d %% %d is %d\n",x,y,x%y);
        break;
    case '*':
        printf("%d * %d is %d\n",x,y,x*y);
        break;
    default:
        printf("ERROR!!!! Enter a valid operator \n");
        break;
    }
    return 0;
}




