#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <map>
using namespace std; 
string n;
int i;

int main(void)
{
    cin >> n;
    int k = n.size();
    for (i = 1; i < k; i++)
    {
        if (i*(i + 1) / 2 == k)
        {
            break;
        }
        else if (i*(i + 1) / 2 > k && i*(i - 1) / 2 < k)
        {
            string a = "";
            for (int j = 0; j < i*(i + 1) / 2 - k + 1; j++)
            {
                a += "#";
            }
            n += a;
            break;
        }
    }
    k = 0;
    int s;
    for (int j = 1; j <= i; j++)
    {
        for (s = k; s < j + k; s++)
        {
            cout << n[s];
        }
        k = s;
        cout << endl;
    }

    return 0;
}