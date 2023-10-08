#include <bits/stdc++.h>
using namespace std;
typedef vector<int> V;
typedef long long ll;

#define f(i,a,b) for (int i = a; i < b; i++)
#define rf(i,a,b) for (int i = a; i >= b; i--)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define endl "\n"
#define precision(x) cout << fixed << setprecision(x)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        V a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        V b=a;
        sort(all(b));
        int j=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[j])
            {
                j++;
            }
            else
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(cnt%k==0)
        {
            cout<<cnt/k<<endl;
        }
        else
        {
            cout<<cnt/k+1<<endl;
        }
    }
    return 0;
}