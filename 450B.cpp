#include <bits/stdc++.h>
using namespace std;
typedef vector<int> V;
typedef long long ll;
 
#define f(i,a,b) for (int i = a; i < b; i++)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll x,y;
    cin>>x>>y;
    ll arr[6];
    arr[0]=x;   
    arr[1]=y;
    arr[2]=(y-x)%1000000007;
    arr[3]=-x;
    arr[4]=-y;
    arr[5]=(x-y)%1000000007;
    ll n;
    cin>>n;
    n=n%6;
    if(n==0)
    {
        n=5;
    }
    else
    {
        n--;
    }
 
    if(arr[n]<0)
    {
        cout<<(arr[n]+1000000007)%1000000007;
    }
    else
    {
        cout<<(arr[n])%1000000007;
    }
    return 0;
}
