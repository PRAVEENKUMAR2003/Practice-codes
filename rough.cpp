#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n; cin >> n;
	vector<int> p(n);
	for (int &x: p) cin >> x;
	string s; cin >> s;
 
	vector<tuple<int,int,int>> a;
	for (int i = 0; i < n; i++) {
		a.emplace_back(s[i], p[i], i);
	}
	///sort(begin(a), end(a));
	
	int y = 1;
	for (auto [w,f,i]: a) {
		cout << w << " " << f << " " << i << endl;
	}
	
	//for (int x: p) cout << x << " ";
	cout << '\n';
}
 
// 0 1 1 1 0 0 0 1
// 2 3 1 8 5 4 7 6
// 1 6 5 8 3 2 4 7
 
 
int main() {
	int tc; cin >> tc;
	while (tc--) solve();
}



/*


#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <map>
using namespace std;


int main(void)
{
    int t, n, x;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> x;
        vector <int> a(x);
        map <int, int> b;
        map <int, int> e;
        for (int &i : a)cin >> i;

        cin >> s;
        for (int i = 0; i < x; i++)
        {
            if (s[i] == '1')
            {
                b.emplace(a[i], i);
            }
            else
            {
                e.emplace(a[i], i);
            }
        }
        int j = x;
        for (auto i = b.rbegin(); i != b.rend(); i++)
        {
            a[i->second] = j;
            j--;
        }
        for (auto i = e.rbegin(); i != e.rend(); i++)
        {
            a[i->second] = j;
            j--;
        }
        for (auto i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

*/

