#include <bits/stdc++.h>
using namespace std;
#define in(n)           long long int n;   cin >> n
#define inarr(n, arr)   vll arr(n); f(i, 0, n)    cin >> arr[i]
#define instr(s)        string s;   cin >> s
#define ll long long int
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define vvll vector<vector<ll>>
#define pll pair<ll, ll>
#define mpll map<ll, ll>
#define ld long double
#define float double
#define f(i, x, n) for (int i = x; i < n; i++)
#define rf(i, x, n) for (int i = x; i >= n; i--)
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(a) (ll) a.size()
#define pi (3.141592653589)
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define watch(x) cerr << (#x) << " is " << (x) << endl
#define pyes cout << "YES" << endl;
#define pno cout << "NO" << endl;
#define dbans(ans) cout << #ans << " = " << ans << endl;
#define pans(ans) cout << ans << endl;
// ll fastprime(ll n){f(i, 2, (ll)sqrt(n)) if (n % i == 0) return 0;return 1;}
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define dbg1(x) cout << #x << "= " << x << endl;
#define dbg2(x,y) cout << #x << "= " << x << "\t" << #y << "= " << y <<endl;
#define dbg3(x,y,z) cout << #x << "= " << x << "\t" << #y << "= " << y << "\t" << #z << "= " << z << endl;
#define dbg4(x,y,z,w) cout << #x << "= " << x << "\t" << #y << "= " << y << "\t" << #z << "= " << z << "\t" << #w << "= " << w << endl;


bool comp(pair<ll,ll> &p1, pair<ll,ll> &p2){
    return p1.first >= p2.first;
}

void solve() {
    in(n);
    vector<pair<ll,ll>> p;
    vll price;
    ll x,y;
    
    f(i,0,n){
        cin >> x >> y;
        price.push_back(x);
        p.push_back({y,x});
    }

    sort(all(price),greater<int>());
    sort(all(p),comp);

    // for(auto it : p){
    //     cout << it.first << " " << it.second << endl;
    // }

    f(i,0,n){
        if(price[i]!=p[i].second){
            cout << "Happy Alex" << endl;
            return;
        }
    }

    cout << "Poor Alex" << endl;
}

int main() {
    // sieve();
    fast;
    ll t = 1;
    ll i = 0;
    // cin >> t;
    while (t--) {
         //cout << "Test Case : " << i + 1 << endl;
        solve();
        i++;
    }
    return 0;
}