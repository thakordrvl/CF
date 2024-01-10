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
#define printvector(x) for(int i=0 ; i<x.size() ; i++) cout<<x[i]<<" "; cout<<endl;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define dbg1(x) cout << #x << "= " << x << endl;
#define dbg2(x,y) cout << #x << "= " << x << "\t" << #y << "= " << y <<endl;
#define dbg3(x,y,z) cout << #x << "= " << x << "\t" << #y << "= " << y << "\t" << #z << "= " << z << endl;
#define dbg4(x,y,z,w) cout << #x << "= " << x << "\t" << #y << "= " << y << "\t" << #z << "= " << z << "\t" << #w << "= " << w << endl;

bool isgood(string temp)
{
    ll k=temp.size();
    for(ll i=0 ; i<k ; ++i)
    {
        if(temp[i]==temp[k-i-1]) return false;
    }
    return true;
}

void solve() {
    in(n);
    instr(s);

    if(n==1){
        if(s[0]=='0'){
            cout << 1 << endl;
            cout << 1 << endl;
        }

        else{
        cout << 1 << endl;
        cout << 0 << endl;
        }
        return;
    }

    ll cnt=0;
    vll v;
    while(!isgood(s) && cnt<=300)
    {   
        if(isgood(s)) break;
        ll m=s.size();
        string st;
        for(ll i=0 ; i<m ; ++i)
        {
            if(s[i]==s[m-i-1])
            {   
                v.pb(m-i);
                string p=s.substr(0,m-i);
                string q=s.substr(m-i,i);
                st=p+"01"+q;
                break;
            }
        }
        s=st;
        cnt++;
    }
    if(cnt>300 && !isgood(s))
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        cout<<cnt<<endl;
        printvector(v);
        return;
    }
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