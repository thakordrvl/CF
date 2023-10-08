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


bool checkforzero(vll arr){

    f(i,0,arr.size()-1){
        if(arr[i]!=arr[i+1])
            return false;
    }

    return true;
}



void solve() {

    int n;
    cin >> n;
    
    vll arr(n);
    unordered_map<ll,int> freq;

    f(i,0,n){
        cin >> arr[i];
        freq[arr[i]]++;
    }

    if(checkforzero(arr)){
        cout << 0 << endl;
        return;
    }

    int np1 = 0;
    int np2 = n-1;

    f(i,0,n){

        if(arr[i]==arr[0])
            np1 = i;
    }

    for(int i=n-1;i>=0;i--){
        if(arr[i]==arr[n-1])
            np2 = i;
    }

    bool flag1 = true;
    bool flag2 = true;

    f(i,0,np1){
        if(arr[i]!=arr[0])
            flag1 = false;
    }

    f(i,np2,n){
        if(arr[i]!=arr[n-1])
            flag2 = false;
    }

    if(flag1 || flag2){
        cout << 1 << endl;
        return ;
    }

    for(auto it : freq){
        if(it.second==1){
            cout << 2 << endl;
            return;
        }
    }

    unordered_map<ll,int> lastpos;
    unordered_map<ll,int> count;

    f(i,0,n){

        if(lastpos.find(arr[i])==lastpos.end()){
            count[arr[i]] = 2;
            lastpos[arr[i]] = i;
        }
        
        else{
            if(lastpos[arr[i]]!=i-1)
                count[arr[i]]++;

            lastpos[arr[i]] = i;
        }
    }

    int ans = INT_MAX;

    for(auto it : count){
        ans = min(ans,it.second);
    }

    dbans(ans);
}

int main() {
    // sieve();
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}