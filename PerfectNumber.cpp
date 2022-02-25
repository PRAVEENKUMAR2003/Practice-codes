#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
using namespace std;
int a, b = 0;


int main(void)
{
    //get input from user
    cout << "Enter a number: ";
    cin >> a;

    //check if its perfect number
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            b += i;
        }
    }

    //print it's naturality
    if (b == a)
    {
        cout << a << " is a perfect number." << endl;
    }
    else
    {
        cout << a << " is not a perfect number." << endl;
    }
    return 0;
}