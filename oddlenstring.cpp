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
    //get string
    string a;
    cout << "Enter string: ";
    getline(cin, a);
    vector <string> b;
    int j = 0;
    string s;
    for (int i = 0; i < a.size(); i++)
    {
        if (i == 0)
        {
            while (a[j] != ' ' && a[j] != ',' && a[j] != '.' && a[j] != '\0' && a[j] != '!')
            {
                j++;
            }
            if ((j - 1) % 2 == 0)
            {
                s = "";
                for (int k = 0; k < j; k++)
                {
                    s = s + a[k];
                }
                b.push_back(s);
            }
            j = 0;
        }
        else if (a[i] == ' ' || a[i] == ',' || a[i] == '.' || a[i] == '\0' || a[i] == '!')
        {
            int k = i;
            while (a[i + 1] != ' ' && a[i + 1] != ',' && a[i + 1] != '.' && a[i + 1] != '\0' && a[i + 1] != '!')
            {
                i++;
                j++;
            }
            if ((j - 1) % 2 == 0)
            {
                s = "";
                for (int q = k + 1; q <= i; q++)
                {
                    s = s + a[q];
                }
                b.push_back(s);
            }
            i = k;
            j = 0;
        }
    }
    cout << "Words with odd No of letters: ";
    for (int i = 0; i < b.size(); i++)
    {
        if (i == 0)
        {
            cout << "{" << b[i] << ", ";
        }
        else if (i == b.size() - 1)
        {
            cout << b[i] << "}" << endl;
        }
        else
        {
            cout << b[i] << ", ";
        }    
    }
    return 0;
}
