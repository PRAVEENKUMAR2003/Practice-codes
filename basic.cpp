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

int hc, ac, hm, am, k, a, h;

bool chc(int x, int r, int e)
{
    int cac, chc;
    cac = ac + x*r;
    chc = hc;
    if (ceil(chc/(float)am) >= ceil(hm/(float)cac))
    {
        return 1;
    }
    chc = hc + x*e;
    cac = ac;
    if (ceil(chc/(float)am) >= ceil(hm/(float)cac))
    {
        return 1;
    }
    if (x == 0)
    {
        return 0;
    }
    chc = hc + (x - 1)*e;
    cac = ac + (x - 1)*r;
    if (ceil(chc/(float)am) >= ceil(hm/(float)cac))
    {
        return 1;
    }
    return 0;
}

void solve()
{
    int c = 0, m = 0;
    bool ok = 1;
    string s, a; cin >> s;
    a = s;
    reverse(all(a));
    FOR(sz(a))
    {
        for (int j = c; j < sz(a); j++)
        {
            if (a[i] == s[j])
            {
                c = j + 1;
                break;
            }
            else if (j == sz(a) - 1)
            {
                m++;
            }
        }
    }
    cout << m << "\n";





    
    
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
        solve();
    }
    return 0;
}















