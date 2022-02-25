#include <stdio.h>
int main(){
    long long int a, b = 0, c, d;
    printf("Enter the numbers as spaced integers: ");
    scanf("%lli %lli", &a, &b);
    d = a*b;
    while(b!=0 && a!= 0){
        if (a == b){
            c = a;
            break;
        }
        if (a > b){
            a %= b;
        }
        else{
            b %= a;
        }
    }
    c = (a > b) ? a : b;
    printf("%lli and %lli are GCD and LCM of given numbers", c, d/c);
    return 0;
}