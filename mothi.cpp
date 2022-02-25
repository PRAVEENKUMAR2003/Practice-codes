// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// { Driver Code Starts.


int main() 
{
    int a;
    cin >> a;
    vector <int> b(a),c;
    for (int i = 0; i < a; i++) cin >> b[i];
    c= b;
    sort((c).begin(), c.end());
    for (int i = 0; i < a; i++)
    {
        cout << (b[i]&b[0]) << "\n";
    }
    return 0;
}