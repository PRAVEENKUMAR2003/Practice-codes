#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
using namespace std;
string c;

int main(void)
{
    vector <char> a{'_', '.'};
    vector <char> b{' ', ','};
    cout << "Enter the text: ";
    getline(cin, c);

    for (int i = 0, s = c.size(); i < s; i++)
    {
        auto d = find(b.begin(), b.end(), c[i]);
        if (d != b.end())
        {
            c[i] = a[d - b.begin()];
        }
        else if (isupper(c[i]))
        {
            c[i] = tolower(c[i]);
        }
    }
    cout << c;
}