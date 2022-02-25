#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
using namespace std;
int a;
string c;                    // c is dummy variable to store name of each items

//create a class to store number of items and name of item
class sales
{
    public:
        sales(string a)
        {
            name = a;
        }
        string getname(void)
        {
            return name;
        }
        void setno(void)
        {
            n++;
        }
        int getno(void)
        {
            return n;
        }

    private: 
        int n = 1;
        string name;       
};

int main(void)
{
    
    //get no of items to be sold
    cout << "No of items to be sold: ";
    cin >> a;
    vector <sales> b;         // b is a vector to save objects of class sales which is used to save name of object and no of items sold
    vector <string> e;        // e is a vector to save names of each things to be sold( it is needed to check if we are selling new item or old item to keep track of no of items sold and to maek new objects if new)(its kind of dummy)
    //use loop and get create object for each new item
    for (int i = 0; i < a; i++)
    {
        cin >> c;
        sales d(c);           // d object is made to just push_back into vector of template sales class b
        auto f = find( e.begin(), e.end(), c);
        if (b.empty() || f == e.end())
        {
            b.push_back(d);
            e.push_back(d.getname());
        }
        else if (f != e.end())
        {
            b[(f - e.begin())].setno();
        }
    }

    //if old item is said add vote to them
    for (int i = 0; i < e.size(); i++)
    {
        cout << e[i] << ": " << b[i].getno() << endl;
    }
    return 0;
}


