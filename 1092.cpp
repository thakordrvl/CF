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

void solve() {
    in(n);
    
    ll sum = n*(n+1);
    sum = sum/2;

    if(sum&1){
        pno
        return;
    }

    pyes
    vll first;
    vll second;

    if(n%4==0){

        for(int i=1;i<=n/2;i+=2){
            first.push_back(i);
            first.push_back(n-i+1);
        }

        for(int i=2;i<=n/2;i+=2){
            second.push_back(i);
            second.push_back(n-i+1);
        }

        cout << n/2 << endl;

        for(auto it : first){
            cout << it << " ";
        }

        cout << endl;

        cout << n/2 << endl;

        for(auto it : second){
            cout << it << " ";
        }
        cout << endl;

        return;
    }

    cout << n/2 + 1 << endl;

    for(int i=1;i<=(n-1)/2;i+=2){
            first.push_back(i);
            first.push_back(n-1-i+1);
    }

    for(auto it : first){
            cout << it << " ";
    }

    cout << endl;

    cout << n/2 << endl;

    for(int i=2;i<=(n-1)/2;i+=2){
            second.push_back(i);
            second.push_back(n-1-i+1);
    }

    second.push_back(n);
    
    for(auto it : second){
            cout << it << " ";
    }
    cout << endl;
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