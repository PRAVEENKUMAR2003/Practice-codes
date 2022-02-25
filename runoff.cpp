#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
string numb;
int even = 0, odd = 0;

int main(void)
{
    cout << "Enter N : ";
    
    cin >> numb;

    for (int i = 0; numb[i] != '\0'; i++)
    {
        if ((int(numb[i] - '0') % 2) == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "The number of odd digits: " << odd << endl;
    cout << "The number of even digits: " << even << endl;
    return 0;
}