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
    int b;
    vector <int> a;
    for (int i = 0; i < 9; i++)
    {
        cin >> b;
        a.emplace_back(b);
    }
    cin >> b;
    string s = "[";
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (a[i] + a[j] == b)
            {
                s += "(";
                s += to_string(a[i]);
                s += ", "; 
                s += to_string(a[j]);
                s += "), ";
            }
        }
    }
    s.erase(s.end() - 2, s.end());
    s += "]";
    cout << s << endl;
    return 0;
}