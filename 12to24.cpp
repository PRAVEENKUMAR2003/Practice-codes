#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;  
string a;
//1am to 11am leave it, 12pm leave it, 1pm to 7pm add 1 and 2, 8pm to 9pm add 2 sub 8 
void amto(vector <char> &a)
{
    if (a[0] == '1' && a[1] == '2')
    {
        a[0] = char(((a[0] - '0') - 1) + '0');
        a[1] = char(((a[1] - '0') - 2) + '0');        
    }
    a.pop_back();
    a.pop_back();
}


void pmto(vector <char> &a)
{
    if ((1 <= (a[1] - '0') && (a[1] - '0') <= 7 && a[0] == '0') || (0 <= (a[1] - '0') && (a[1] - '0') <= 1 && a[0] == '1'))
    {
        a[0] = char(((a[0] - '0') + 1) + '0');
        a[1] = char(((a[1] - '0') + 2) + '0');
    }
    else if (8 <= (a[1] - '0') && a[0] == '0' && (a[1] - '0') <= 9)
    {
        a[0] = char(((a[0] - '0') + 2) + '0');
        a[1] = char(((a[0] - '0') - 8) + '0');
    }
    a.pop_back();
    a.pop_back();
}


int main(void)
{
    //get input as a string
    getline(cin, a);
    vector <char> b;
    for (int i = 0; i < a.size(); i++)
    {
        b.emplace_back(a[i]);
    }
    
    //check if am or pm
    if (a[8] == 'a' || a[8] == 'A')
    {
        amto(b);
    }
    else {
        pmto(b);
    }
    
    
    //remove am or pm and change hour accordingly
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i];
    }
    
    return 0;
}
