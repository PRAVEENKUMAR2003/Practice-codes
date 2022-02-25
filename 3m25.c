#include <stdio.h>
#include <math.h>
int main()
{
    int factorial = 1,power;
    float sum = 0, x;
    printf("Enter x and # of terms: ");
    scanf("%f%d",&x,&power);
    while(power--){
        for (int i = 1; i <= power; i++){
            factorial *= i;
        }
        sum += pow(x, power)/(float)factorial;
        factorial = 1;
    }
    printf("the value of required series is %.2f",sum);
    return 0;    
}