#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int d;


void merge(vector <int> &a)
{
    vector <int> b, c;
    int q = 0, w = 0;
    if (a.size() != 1)
    {
        for (int k = 0; k < a.size() / 2; k++)
        {
            b.emplace_back(a[k]);
        }
        merge(b);        
        for (int k = a.size() / 2; k < a.size(); k++)
        {
            c.emplace_back(a[k]);
        }
        merge(c);
        for (int i = 0; i < a.size(); i++)
        {
            if (b[q] > c[w] && w < c.size() && q < b.size())
            {
                a[i] = c[w];
                w++;
            }
            else if (b[q] < c[w] && w < c.size() && q < b.size())
            {
                a[i] = b[q];
                q++;
            }
            else if (b[q] == c[w] && w < c.size() && q < b.size())
            {
                a[i] = b[q];
                q++;
                a[i + 1] = c[w];
                w++;
                i++;
            }
            else if (w >= c.size() && q < b.size())
            {
                a[i] = b[q];
                q++;
            }
            else if (w < c.size() && q >= b.size())
            {
                a[i] = c[w];
                w++;
            }
        }
    }
}
     
int main(void)
{
    cout << "No of elements to be sorted: ";
    cin >> d;
    vector <int> a(d);
    cout << "Enter elements to be sorted:\n";
    for (int i = 0; i < d; i++)
    {
        cin >> a[i];
    }
    merge(a);
    cout << "elements in sorted order: \n";
    for (int i = 0; i < d; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}