#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
using namespace std;
int c, d;
char a;


int main(void)
{
    //get no of works
    cout << "Enter no of transactions: ";
    cin >> c;
    int net_amount = 0;

    //use loop and get and update net amount
    for (int i = 0; i < c; i++)
    {
        cin >> a;
        if (a == 'd' || a == 'D')
        {
            cin >> d;
            net_amount += d;
        }
        else if (a == 'w' || a == 'W')
        {
            cin >> d;
            net_amount -= d;
        }
        else 
        {
            cin >> d;
        }       
    }
    cout << "Net Amount : " << net_amount << endl;

}