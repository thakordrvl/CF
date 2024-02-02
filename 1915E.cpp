#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define in(n)           long long int n;   cin >> n
#define inarr(n, arr)   vector<ll> arr(n); for(int i=0; i<n; i++) cin >> arr[i]
#define instr(s)        string s;   cin >> s
#define ll long long int
#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
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
const ll mod = 1000000007;
ll __lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }
ll __lcm(vector<ll> &arr) { ll res = arr[0]; for (ll i = 1; i < arr.size(); i++) res = __lcm(res, arr[i]); return res; }
ll __gcd(ll a, ll b) { if (b == 0) return a; return __gcd(b, a % b); }
ll __gcd(vector<ll> &arr) { ll res = arr[0]; for (ll i = 1; i < arr.size(); i++) res = __gcd(res, arr[i]); return res; }
ll __gcd(ll a, ll b, ll c) { return __gcd(__gcd(a, b), c); }
ll __lcm(ll a, ll b, ll c) { return __lcm(__lcm(a, b), c); }
ll pow(ll a, ll b) { ll res = 1; while (b) { if (b & 1) res = (res * a); a = (a * a); b >>= 1; } return res; }
ll pow(ll a, ll b, ll m) { ll res = 1; while (b) { if (b & 1) res = (res * a) % m; a = (a * a) % m; b >>= 1; } return res; }
ll modInv(ll a, ll m = mod) { return pow(a, m - 2, m); }
ll fact(ll n) { ll res = 1; for (ll i = 1; i <= n; i++) res = (res * i) % mod; return res; }
vector<ll> sieve(ll n) { bool prime[n + 1]; memset(prime, true, sizeof(prime)); for (ll p = 2; p * p <= n; p++) { if (prime[p] == true) { for (ll i = p * p; i <= n; i += p) prime[i] = false; } } vector<ll> v; for (ll i = 2; i <= n; i++) { if (prime[i]) v.pb(i); } return v; }
ll dijkstra(vector<vector<pair<ll, ll>>> &adj, ll src, ll dest) { vector<ll> dist(adj.size(), 1e18); dist[src] = 0; priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq; pq.push({0, src}); while (!pq.empty()) { ll u = pq.top().second; ll d = pq.top().first; pq.pop(); if (d > dist[u]) continue; for (auto v : adj[u]) { if (dist[u] + v.second < dist[v.first]) { dist[v.first] = dist[u] + v.second; pq.push({dist[v.first], v.first}); } } } return dist[dest]; }
ll nCr(ll n, ll r) { if (r > n) return 0; if (r > n - r) r = n - r; ll ans = 1; for (ll i = 0; i < r; i++) { ans *= (n - i); ans /= (i + 1); } return ans; }

void solve() {
    in(n);
    inarr(n,arr);

    map<ll,ll> m;

    ll sum = 0;

    f(i,0,n){

        if(i&1)
            sum -= arr[i];

        else    
            sum += arr[i];


        if(sum==0){
            pyes
            return;
        }

        if(m[sum]){
            pyes
            return;
        }

        m[sum]++;
    }

    pno


}

int main() {
    // sieve();
    fast;
    ll t = 1;
    ll i = 0;
    cin >> t;
    while (t--) {
         //cout << "Test Case : " << i + 1 << endl;
        solve();
        i++;
    }
    return 0;
}