#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maxheap priority_queue<ll> 
#define minheap priority_queue<ll,vector<ll>,greater<ll>>
#define setpre(x,d) fixed<<setprecision(d)<<x
#define PI 3.141592653589793238
#define lld long double
#define vll vector<long long int>
#define vpll vector<pair<long long int,long long int>>
#define vi vector<int>
#define pi pair<int,int>
#define pb push_back
#define mp make_pair
#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl
#define SQ(a) (a)*(a)
#define loop(i,a,b) for(int i=a ; i<b ; i++)
#define printvector(x) for(int i=0 ; i<x.size() ; i++) cout<<x[i]<<" "; cout<<endl;
#define printvpll(x) for(int i=0 ; i<x.size() ; i++) {cout<<x[i].first<<" "<<x[i].second; cout<<endl;}
#define dbg1(x) cout << #x << "= " << x << endl;
#define dbg2(x,y) cout << #x << "= " << x << "\t" << #y << "= " << y <<endl;
#define dbg3(x,y,z) cout << #x << "= " << x << "\t" << #y << "= " << y << "\t" << #z << "= " << z << endl;
#define dbg4(x,y,z,w) cout << #x << "= " << x << "\t" << #y << "= " << y << "\t" << #z << "= " << z << "\t" << #w << "= " << w << endl;
#define MOD 1000000007

ll powe(ll a,ll b)
{
    ll ans=1;
    while(b)
    {
        if(b%2)
        ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b/=2;
    }
    return ans%MOD;
}

void dfs(ll node,vll &vis,vpll &v)
{   
    ll n=vis.size();
    vis[node]=1;
    for(ll i=0 ; i<n ; ++i)
    {
        if(!vis[i] && (v[node].first==v[i].first || v[node].second==v[i].second))
        {
            dfs(i,vis,v);
        }
    }
}

double dist(ll x1,ll y1,ll x2,ll y2)
{
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

bool f(double w,ll ax,ll ay,ll bx,ll by,ll px,ll py)
{   
    double d=dist(ax,ay,bx,by);
    double d1=dist(0,0,ax,ay);
    double d2=dist(px,py,ax,ay);
    double d3=dist(0,0,bx,by);
    double d4=dist(px,py,bx,by);

    if((d1<=w && d2<=w) || (d3<=w && d4<=w) || (d1<=w && d4<=w && d<=2*w)
         || (d2<=w && d3<=w && d<=2*w)) return true;
         return false;
}


void solve()
{
    ll px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;
    double low=0.0;
    double dist=px*px+py*py;
    double high=1e9;
    while(high-low>1e-6)
    {
        double mid=low+(high-low)/2.0;
        if(f(mid,ax,ay,bx,by,px,py))
        {
            high=mid;
        }
        else{
            low=mid;
        }
    }
    cout<<low<<endl;
    
}

int main()
{   
    cout<<fixed<<setprecision(10);
    ios::sync_with_stdio(0), cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {   
        solve();
    } 
    return 0;
}