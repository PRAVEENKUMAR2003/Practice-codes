#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;


int main(void)
{
    int a;
    //get int
    cout << "Enter integer: ";
    cin >> a;
    //print with loop
    for (int i = 0; i < a ; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = a - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}