//o(1)
#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    printf("Area and perimeter of circle is %f and %f", pi*r*r, 2*pi*r);
    return 0;
}



/*
//o(1)
#include <stdio.h>
#include <math.h>
int main()
{
    float p, r;
    int n;
    char s;

    printf("If you wanna calculate Simple interest enter 's',Compound interest enter 'c': ");
    scanf("%c", &s);
    printf("principal: ");
    scanf("%f", &p);
    printf("rate of interest: ");
    scanf("%f", &r);
    printf("number of years: ");
    scanf("%d", &n);
    if (s == 'c' || s == 'C')
    {
        float i = (float)p*pow((1 + r/100.0), n) - p;
        printf("Compound interest is %f", i);
    }
    else
    {
        float i = p*n*r/(float)100;
        printf("Simple interest at end of %d is %f", i, n);
    }
    
    return 0;
}


/*
//o(1)
#include <stdio.h>
#include <math.h>
int main()
{
    float f, c;
    printf("Temperature in fahrenheit: ");
    scanf("%f", &f);
    c = (5.0/9)*(f - 32.0);
    printf("Temperature in centigrade is %f", c);
    
    return 0;
}

/*

//o(1)
#include <stdio.h>
#include <math.h>
int main()
{
    float m1, m2, m3, average;
    printf("Enter all 3 marks: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    printf("Your average is %f", (m1 + m2 + m3)/3);
    return 0;
}



//o(1)
#include <stdio.h>
#include <math.h>
int main()
{
    float basic, grosspay;
    printf("Enter basic pay: ");
    scanf("%f", &basic);
    grosspay = (160/100)*basic;
    printf("Gross pay is %f", grosspay);
    return 0;
}




//o(1)
#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, d;
    printf("Enter 1st point: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter 2st point: ");
    scanf("%f %f", &x2, &y2);
    d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("Distance between those 2 points is %f", d);
    return 0;
}


//o(1) 
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Value of a and b before swaping %d and %d\n\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("Value of a and b after swaping %d and %d", a, b);
    return 0;
}*/