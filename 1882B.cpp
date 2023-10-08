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
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define dbg1(x) cout << #x << "= " << x << endl;
#define dbg2(x, y) cout << #x << "= " << x << "\t" << #y << "= " << y << endl;
#define dbg3(x, y, z) cout << #x << "= " << x << "\t" << #y << "= " << y << "\t" << #z << "= " << z << endl;
#define dbg4(x, y, z, w) cout << #x << "= " << x << "\t" << #y << "= " << y << "\t" << #z << "= " << z << "\t" << #w << "= " << w << endl;

void solve()
{
    int n;
    cin >> n;

    vector<set<int>> sets(n);
    unordered_map<int, int> present;

    f(i, 0, n)
    {
        int m;
        cin >> m;
        f(j, 0, m)
        {
            int x;
            cin >> x;
            sets[i].insert(x);
            present[x]++;
        }
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    vector<set<int>> num(50);
    int ans = 0;

    for (int i = 0; i < 50; i++)
    {

        if (present[i + 1] == 0)
            continue;

        for (int j = 0; j < n; j++)
        {

            if (sets[j].find(i + 1) == sets[j].end())
            {
                for (auto it : sets[j])
                    num[i].insert(it);
            }
        }
    }

    // f(i, 0, 50)
    // {
    //     if(present[i+1]==0)
    //         continue;

    //     cout << "indexing : " << i + 1 << endl;

    //     for (auto it : num[i])
    //         cout << it << " ";

    //     cout << endl;
    // }

    int index;

    f(i,0,50){
        if(present[i+1] && num[i].size()>ans){
            ans = num[i].size();
            index = i;
        }
    }

    // cout << "index : " << index + 1 << endl;

    // cout << "seq :";

    // for(auto it : num[index])
    //     cout << it << " ";

    // cout << endl;

    pans(ans);

    // dbans(ans);
}

int main()
{
    // sieve();
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}