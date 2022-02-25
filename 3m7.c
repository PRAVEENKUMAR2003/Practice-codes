#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("Enter a year: ");
    scanf("%d", &a);
    if (a%100 == 0){
        if (a%400 == 0){
            printf("Leap year!!");
        }
        else{
            printf("Not a leap year!!");
        }
    }
    else{
        if (a%4 == 0){
            printf("Leap year!!");
        }
        else{
            printf("Not a leap year!!");
        }
    }
    return 0;
}