#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter sides of triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a >= b + c || b >= a + c || c >= a + b){
        printf("No triangle!");
    }
    else if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
        if (a == b || a == c || b == c){
            printf("Isosceles triangle and Right angled triangle");
        }
        else if ((a != b && b != c) && (a != c)){
            printf("scalene triangle and Right angled triangle");
        }
    }
    else if (a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b){
        if (a == b || a == c || b == c){
            printf("Isosceles triangle and obtuse angled triangle");
        }
        else{
            printf("scalene triangle and obtuse angled triangle");
        }
    }
    else if (a*a < b*b + c*c && b*b < a*a + c*c && c*c < a*a + b*b){
        if (a == b && b == c && a == c){
            printf("Equilateral triangle and acute angled triangle");
        }
        else if (a == b || a == c || b == c){
            printf("Isosceles triangle and acute angled triangle");
        }
        else{
            printf("scalene triangle and acute angled triangle");
        }
    }
    return 0;
}