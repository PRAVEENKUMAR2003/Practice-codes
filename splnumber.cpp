#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;  
int a;

int main()
{
    //get number of inputs from user
    cout << "No of inputs: ";
    cin >> a;
    vector <int> b(a);
    //get inputs from user
    for (int i = 0; i < a; ++i)
    {
        cin >> b[i];
    }

    //use loop to find the special number
    int suml, sumr;
    for (int i = 0; i < a; ++i)
    {
        suml = 0;
        sumr = 0;
        for (int j = 0; j < i; ++j)
        {
            int c = 0, d = b[j];
            do
            {
                c = d % 10;
                suml += c;
                d = d / 10;
            }
            while (d != 0);
        }
        for (int j = i + 1; j < a; ++j)
        {
            int c = 0, d = b[j];
            do
            {
                c = d % 10;
                sumr += c;
                d = d / 10;
            }
            while (d != 0);
        }
        if (sumr == suml)
        {
            cout << b[i] << " is special number.";
        }
    }
    return 0;
}