#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
using namespace std;
string c;
int a = 0, A = 0;


int main(void)
{
    //get string from user
    cout << "Enter the character(s): ";
    cin >> c;
    vector <char> v;

    //save each char to  another vector of char except when'a' appears
    for (int i = 0, n = c.size(); i < n; i++)
    {
        if (c[i] != 'a' && c[i] != 'A')
        {
            v.push_back(c[i]);
        }
        else if(c[i] == 'a')
        {
            a++;
        }
        else if(c[i] == 'A')
        {
            A++;
        }
    }
    for (int i = 0; i < a; i++)
    {
        v.push_back('a');
    }
    for (int i = 0; i < A; i++)
    {
        v.push_back('A');
    }
    for (char i : v)
    {
        cout << i;
    }
}