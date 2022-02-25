#include <algorithm>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <cmath>
using namespace std;
int a;

int main(void)
{
    //get integer from user
    cout << "Enter digit: ";
    cin >> a;

    vector <int> b{0, 4, 6, 9}, c{8}, d{1, 2, 3, 5, 7};

    vector <int>::iterator itb = find(b.begin(), b.end(), a), itc = find(c.begin(), c.end(), a), itd = find(d.begin(), d.end(), a);

    //check No of closed surfaces in integer
    if (itb != b.end())
    {
        cout << *itb << " has 1 closed surface!" << endl;
    }
    else if (itc != c.end())
    {
        cout << *itc << " has 2 closed surfaces!" << endl;
    }
    else if (itd != d.end())
    {
        cout << *itd << " has no closed surfaces!" << endl;
    }
    else
    {
        cout << "Enter a valid digit(0 <= x <= 9)" << endl;
        main();
    }
    
    return 0;
}