#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<map>

using namespace std;

#define FOU(i,x,y) for(int i=x;i<=y;i++)
#define FOD(i,x,y) for(int i=x;i>=y;i--)
#define MEM(a,val) memset(a,val,sizeof(a))
#define PI acos(-1.0)

const double EXP = 1e-9;
typedef long long ll;
typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;
const ll MINF = 0x3f3f3f3f3f3f3f3f;
const double DINF = 0xffffffffffff;
const int mod = 1e9+7;
const int N = 1e6+5;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    std::ios::sync_with_stdio(false);
    int n;
    int a[105];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int minn=INF;
    int loc;
    for(int i=1;i<n;i++)
    {
        if(abs(a[i]-a[i+1])<minn)
        {
            minn=abs(a[i]-a[i+1]);
            loc=i;
        }
    }
    if(abs(a[n]-a[1])<minn)
    {
        cout<<n<<" 1"<<endl;
    }
    else
        cout<<loc<<" "<<loc+1<<endl;
    return 0;
}