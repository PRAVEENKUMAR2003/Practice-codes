#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c;
    printf("Enter the range as two spaced integers: ");
    scanf("%d %d", &a, &b);
    if (a == 1 || a == 0){
        printf("1 and 0 are neither prime nor composite number!!\n");
        a = 2;
    }
    printf("Prime numbers :\n");
    for (int i = a; i <= b; i++){
        c = 0;
        for (int j = 2; j <= floor(sqrt(i)); j++){
            if (i % j == 0){
                c++;
            }
        }
        if (c == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("Non prime numbers :\n");
    for (int i = a; i <= b; i++){
        c = 0;
        for (int j = 2; j <= floor(sqrt(i)); j++){
            if (i % j == 0){
                c++;
            }
        }
        if (c != 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

