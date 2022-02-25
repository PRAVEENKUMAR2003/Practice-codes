#include <stdio.h>
int main()
{
    static int x;
    printf("Enter mark: ");
    scanf("%d", &x);
    if (x >= 0 && x < 40){
        printf("Fail");
    }
    else if (x >= 40 && x <= 49){
        printf("E");
    }
    else if (x >= 50 && x <= 59){
        printf("D");
    }
    else if (x >= 60 && x <= 69){
        printf("C");
    }
    else if (x >= 70 && x <= 79){
        printf("B");
    }
    else if (x >= 80 && x <= 89){
        printf("A");
    }
    else if (x >= 90 && x <= 100){
        printf("A+");
    }
    else{
        printf("Enter a valid mark \n");
    }
    return 0;
}