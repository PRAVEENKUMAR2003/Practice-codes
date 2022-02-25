#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;  
string a, b;
int c = 0;

void commonchar(string &a, string &b)
{
    vector <char> d;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] != b[j])
            {
                c++;
            }
        }
        if (c == b.size())
        {
            d.emplace_back(a[i]);
        }
        c = 0;
    }
    cout << "{";
    for (int j = 0; j < d.size(); j++)
    {
        if (j == d.size() - 1)
        {
            cout << d[j];
        }
        else
        {
            cout << d[j] << ", ";
        } 
    }
    cout << "}";    
}

int main(void)
{
    cin >> a;
    cin >> b;

    commonchar(a, b);
    commonchar(b, a);

    return 0;
}