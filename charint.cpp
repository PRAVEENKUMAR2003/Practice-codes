#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;
string a;

int main(void)
{
    cin >> a;
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (isupper(a[i]) || islower(a[i]))
        {
            sum += int(a[i]);
        }
        else if (0 <= int(a[i] - '0') && int(a[i] - '0') <= 9)
        {
            sum += int(a[i] - '0');
        }
    }

    if (sum % 2 == 0)
    {
        cout << "Even " << sum << endl;
    }
    else 
    {
        cout << "Odd " << sum << endl;
    }


    return 0;
}