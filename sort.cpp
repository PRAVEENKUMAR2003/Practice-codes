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


int main(void)
{
    vector <int> a;
    vector <int> b;
    for (int i = 400000; i > 0; i--)
    {
        a.push_back(i);
    }
    int j = 400000;
    int k = 400000;
    while (b.size() != 400000)
    {
        for (int i = 0; i < j; i++)
        {
            if (a[i] <= k)
            {
                k = a[i];
            }
        }
        j--;
        b.push_back(k);
        cout << k << endl;
        k = 400000;
    }
    cout << endl << "elements in sorted order: \n";
    
    return 0;
}