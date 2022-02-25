// AEYYYY!!!! Dis Kold yis ratten buy Piraveen;)!
#include <bits/stdc++.h>
using namespace std;
#define FOR(a) for (int i=0; i<(a); i++)
#define pb  emplace_back
#define mp  make_pair
#define all(x)  (x).begin(),(x).end()
#define fi  first
#define se  second
#define lb lower_bound
#define ub upper_bound
#define sz(x)  ((int)(x).size())
#define input(vec,N) for(int i = 0; i < (N); i++) cin >> vec[i];
#define revsort(v) sort(v.rbegin(), v.rend())
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef vector<ll> vi;
#define int ll
#define toint(a) a.to_ulong()
const ll big=1000000007;
const ll inf=1e18;
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
#define pow2(i)          (1LL << (i))
#define is_on(x, i)      ((x) & pow2(i)) // state of the ith bit in x
#define set_on(x, i)     ((x) | pow2(i)) // returns integer x with ith bit on
#define set_off(x, i)    ((x) & ~pow2(i)) // returns integer x with ith bit off
//set
template <class A>
void print(const set<A> a){
    for(auto it = a.begin(); it != a.end(); it ++){
        cout << *it << " ";
    }
    cout << "\n";
}
template <class A>
void print(const unordered_set<A> a){
    for(auto it = a.begin(); it != a.end(); it ++){
        cout << *it << " ";
    }
    cout << "\n";
}
template <class A, class B>
void print(const map<A, B> a){
    for(auto it = a.begin(); it != a.end(); it ++){
        cout << "("<< it->first << " => "<< it->second  <<") ";
    }
    cout << "\n";
}
template <class A, class B>
void print(const unordered_map<A, B> a){
    for(auto it = a.begin(); it != a.end(); it ++){
        cout << "("<< it->first << " => "<< it->second  <<") ";
    }
    cout << "\n";
}
template <class A> 
void print(const vector <A> &a){
    for(auto x: a){
        cout << x  << " ";
    }
    cout << "\n";
}
template <class A>
void print(const vector <vector < A>> &a){
    for(auto &x: a){
        for(auto y: x){
            cout << y << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
template <class A> 
void in(vector <A> &a){
    if(a.size() == 0) return;
    for(auto &x: a){
        cin >> x;
    }
}
template <class A> 
void in(vector <vector < A>> &a){
    int n = a.size();
    if(n == 0) return;

    int m = a[0].size();

    for(int i = 0; i< n; i++){
        for(int j = 0; j< m ; j++){
            cin >> a[i][j]; 
        }
    }
}
ll lcm(ll a, ll b){
    return (a / __gcd(a, b)) * b;
}
ll nCr(ll n, ll r){
    if(n- r < r)
        r = n - r;
    ll N = 1, D = 1; 
    while(r){
        N *= n;
        D *= r;
        ll gcd = __gcd(N, D);
        N /= gcd;
        D /= gcd;
        r--;
        n--;
    }
    return N;
}
ll pow_log(ll a, ll b, ll m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1){
            res = res * a % m;
            // if(res > over) {
            //     over = -1;
            //     return -1;
            // }
        }
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll fact(ll a, ll m){
    if(a == 0) return 1 % m;
    else if(a == 1) return 1 % m;
    else{
        ll ans = 1;
        for(int i = a; i> 1; i--){
            ans *= i; ans %= m;
        }
        return ans;
    }
    return -1;
}
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
int rtsum(int a)
{
    int sum = 1, in, g;
    for (int i = 2; i <= sqrt(a); i++)
    {
        in = 1, g = 1;
        while(a%i == 0)
        {
            in *= i;
            a /= i;
            g += in;
        }
        sum *= g;
    }
    if (a >= 2)
    {
        sum *= (a + 1);
    }
    return sum;
}




pair <int, vector<int> >  solve(vector <int> a)
{
    int mx = 0;
    vector <int> b, c, d;
    for(int i = 0; i < sz(a); i++)
    {
        b.push_back(a[i]);
        c.push_back(a[i]);
        if (mx < sz(b)) d = b;
        mx = max(sz(b), mx);
        if (mx < sz(c)) d = c;
        mx = max(sz(c), mx);
        if (i <= sz(a) - 2)
        {
            for (int j = i + 1; j < sz(a); j++)
            {
                if (a[j] > b.back())
                {
                    b.push_back(a[j]);
                    if (mx < sz(b)) d = b;
                    mx = max(sz(b), mx);
                }
                if (a[j] < c.back())
                {
                    c.push_back(a[j]);
                    if (mx < sz(c)) d = c;
                    mx = max(sz(c), mx);
                }
            }
        }
        b.clear();
        c.clear();
    }
    return {mx, d};
}


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, b;
    cin >> t;
    int mx = 0;
    
    while (t--)
    {
        cin >> b;
        vector <int> a(b);
        for (int i = 0; i < b; i++)
        {
            cin >> a[i];
        }
        pair <int, vector <int> > d = solve(a);
        cout << "Size is " << d.first << "\n";
        print(d.second);
    }
    return 0;
}




















/*#include <bits/stdc++.h>
using namespace std;
void solve(){
        int n;
        cin>>n;

        

        int sz = log2(n)+1;
        int num = 0;
        for(int i = 0; i <= sz; ++i){
                num += (1<<i);
        }

        cout<< n << " " << 0 <<" "<<num<<endl;
}

int main(){
#ifndef ONLINE_JUDGE
        freopen("inputF.in", "r", stdin);
        freopen("outputF.in", "w", stdout);
#endif
        
        
        int t;
        cin>>t;
        while(t--){
                solve();
        }
        
        return 0;
}*/