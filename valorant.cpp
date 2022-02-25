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
    long long int t, n, h;
    cin >> t;

    while (t--)
    {
        cin >> n >> h;
        vector <long long int> a(n);
        for (long long int i =  0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (h <= a[n - 1])
        {
            cout << 1 << endl;
        }
        else if (h <= a[n - 1] + a[n - 2])
        {
            cout << 2 << endl;
        }
        else if ((h % (a[n - 1] + a[n - 2])) <= a[n - 1] && (h % (a[n - 1] + a[n - 2])) != 0)
        {
            cout << 1 + ((long long)(h / (a[n - 1] + a[n - 2])))*2 << endl;
        }
        else if ((h % (a[n - 1] + a[n - 2])) == 0)
        {
            cout << ((long long)(h / (a[n - 1] + a[n - 2])))*2 << endl;
        }
        else
        {
            cout << 2 + ((long long)(h / (a[n - 1] + a[n - 2])))*2 << endl;
        }
    }
    return 0;
}