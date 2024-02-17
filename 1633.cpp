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
bool isPowerOfTwo(int n) { if (n == 0) return false; return (ceil(log2(n)) == floor(log2(n))); }
int isKthBitSet(int n, int k) { if ((n >> k) & 1ll) return 1; else return 0; }
int unsetKthBit(int n, int k) { return (n & (~(1ll << (k)))); }
int setKthBit(int n, int k) { return ((1ll << k) | n); }
int bs_sqrt(int x) { int left = 0, right = 2000000123; while (right > left) { int mid = (left + right) / 2; if (mid * mid > x) right = mid; else left = mid + 1; } return left - 1; }
int modpower(int n, int a, int p) { int res = 1; while (a) { if (a % 2) res = ((res * n) % p), a--; else n = ((n * n) % p), a /= 2; } return res; }
int getSum(int n) { int sum; for (sum = 0; n > 0; sum += n % 10, n /= 10) ; return sum; }
bool isPrime(int n) { if (n <= 1) for (int i = 2; i * i <= n; i++) { if (n % i == 0) return false; } return true; }
void primeFactors(int n, set<int> &st) { while (n % 2 == 0) { st.insert(2); n = n / 2; } for (int i = 3; i <= bs_sqrt(n); i = i + 2) { while (n % i == 0) { st.insert(i); n = n / i; } } if (n > 2) st.insert(n); }
int modInverse(int n, int p) { return modpower(n, p - 2, p); }
int mul(int x, int y, int p) { return x * 1ll * y % p; }
int divide(int x, int y, int p) { return mul(x, modInverse(y, p), p); }
bool isPerfectSquare(long double x) { if (x >= 0) { long long sr = bs_sqrt(x); return (sr * sr == x); } return false; }

void solve() {
    ll mod = 1e9 + 7;

    in(n);
    ll dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    dp[1] = 1;

    for(int i=2;i<=n;i++){

        for(int j=1;j<=6;j++){

            if(i>=j)
                dp[i] += (dp[i-j]);
        }

        dp[i] = dp[i] % mod;
    }

    cout << dp[n] << endl;
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