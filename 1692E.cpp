#include <bits/stdc++.h>
using namespace std;
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

    ll n,s;
    cin  >> n >> s;
    vector<ll> arr(n);
    vector<ll> vec;
    ll tot = 0;

    f(i,0,n){
        cin >> arr[i];
    }

    ll count = 0;

    f(i,0,n){   

        if(arr[i]==0){
            count++;
        }

        else{
            vec.push_back(count+1);
            count = 0;
            tot++;
        }
    }

    if(count!=0)
        vec.push_back(count+1);

    else if(arr[n-1]){
        vec.push_back(1);
    }

    if(tot<s){
        cout << -1 << endl;
        return;
    }

    if(tot==s){
        cout << 0 << endl;
        return;
    }

    int k = tot - s;
    int sum = 0;

    // dbg1(k);

    f(i,0,k){
        sum += vec[i];
    }
    
    // cout << "sequence : ";

    // for(int i=0;i<vec.size();i++){
    //     cout << vec[i] <<" ";
    // }

    // cout << endl;

    int ans = sum;
    n = vec.size();
    // ans = min(sum,ans);

    f(i,0,k){
        sum-=vec[k-1-i];
        sum+=vec[n-i-1];
        ans = min(sum,ans);
    }

    pans(ans);
}

int main() {
    // sieve();
    fast;
    ll t = 1;
    cin >> t;
    int i = 0;
    while (t--){
        // cout << "test cast :" << i+1 << endl;
        i++;
        solve();
    }
    return 0;
}