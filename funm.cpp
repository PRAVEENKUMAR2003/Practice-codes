#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t;cin>>t;
     while(t--)
     {
        double n;cin>>n;
        double c=pow(0.143*n,n);
        cout << round(c) << "\n";
     }
}