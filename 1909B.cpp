#include <bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;

////////////////////////////////////////////////////////////////////////////////////////////////////



#define endl '\n'
#define fi                first
#define se                second
#define ll int
#define int long long int
#define pb push_back
#define print(a, n) for (int i = 0; i < n; i++)cout << a[i] << " ";cout<<endl;
#define in1(a) cin>>a
#define in2(a,b) cin>>a>>b
#define in3(a,b,c) cin>>a>>b>>c
#define in4(a,b,c,d) cin>>a>>b>>c>>d
#define in5(a,b,c,d,e) cin>>a>>b>>c>>d>>e
#define in(a,n) for(int i=0;i<n;i++)cin>>a[i];
#define rev(v) reverse(v.begin(), v.end())
#define ulli unsigned long long int
#define f(i, l, n) for (int i = l; i < n; i++)
#define r(i, l, n) for (int i = l; i >= n; i--)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pmo cout << "-1" << endl
#define p(x) cout << x << endl
#define con continue
#define all(v)  v.begin(),v.end()
#define pb push_back
#define u_m unordered_map
#define p_pq(x)   while(!(x.empty())){ cout<<x.top()<<" "; x.pop();}
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef pair<int, int> pii;
typedef priority_queue <int>  pqi;
typedef  priority_queue <int, vector<int>, greater<int>> pqir;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
const int M=1000000007;



////////////////////////////////////////////////////////////////////////////////////////////////////

bool isPowerOfTwo(int n){if(n == 0)return false;return (ceil(log2(n)) == floor(log2(n)));}
int isKthBitSet(int n, int k){if((n >> k) & 1)return 1;else return 0;}
int setKthBit(int n, int k){ return((1 << k) | n);}
int fact(int number){int fact=1; for(int i=1;i<=number;i++){fact=fact*i;}return fact;}  
int bs_sqrt(int x){int left=0,right=2000000123;while(right>left){int mid=(left+right)/2;if(mid*mid>x)right=mid;else left=mid+1;}return left-1;}
int  modpower(int n,int a,int p){ int res=1; while(a){ if(a%2) res= ((res*n)%p) ,a--; else n=((n*n)%p),a/=2;} return res;}
int getSum(int n){int sum;for(sum=0;n>0;sum+=n%10,n/=10);return sum;}
bool isPrime(int n){if(n<=1)for(int i=2;i*i<=n;i++){if(n%i==0)return false;}return true;}
void primeFactors(int n,set<int>&st){while(n%2==0){st.insert(2);n=n/2;}for(int i=3;i<=bs_sqrt(n);i=i+2){while(n%i==0){st.insert(i);n=n/i;}}if(n>2)st.insert(n);}
int ncr(int N,int r){double res=1;for(int i=1;i<=r;i++){res=res*(N-r+i)/i;}return (int)res;}
int modInverse(int n, int p){return modpower(n, p - 2, p);}
int mul(int x,int y, int p){return x * 1ll * y % p;}
int divide(int x,int y, int p){return mul(x, modInverse(y, p), p);}
int nCrModPFermat(int n,int r, int p)
{
    if(n<r)return 0;if(r==0)return 1;if(n-r<r)return nCrModPFermat(n, n - r, p);
    int res = 1;for(int i = r; i >= 1; i--)res = divide(mul(res, n - i + 1, p), i, p);return res;
}
bool isPerfectSquare(long double x){if (x >= 0) {long long sr = bs_sqrt(x);return (sr * sr == x);}return false;}
void makeSparseTable(vector<vector<int>> &m,vi &a,int n,int LOG)//LOG = log2(n)+1;
{   //size of m is [n][LOG]
    for(int i=0;i<n;i++)m[i][0]=a[i];
   
    for(int k=1;k<LOG;k++)
        for(int i=0;i+(1<<k)-1<n;i++)m[i][k]=max(m[i][k-1],m[i+(1<<(k-1))][k-1]);
}

int SparsTableQuery(vector<vector<int>> &m,int L,int R)
{ //L and R is on 0 base indexing 
  int length=R-L+1;
  int k=0;
  while((1<<(k+1))<=length)k++;
  return max(m[L][k],m[R-(1<<k)+1][k]);
}

////////////////////////////////////////////////////////////////////////////////////////////////////


//Kabhi Kbhi int ka jo long long kiya hai usme bhi TLE aa jati hai

 
void solve()
{
  int n;
  in1(n);

  int a[n];

  in(a,n);

  int c1=0;
  int c2=0;
  

  int ans=2;
  while(ans<=1e18)
  {
     set<int> s;
     f(i,0,n)
     {
        s.insert(a[i]%ans);
     }

     if(s.size()==2)
     {
        p(ans);
        return;
     }
     ans*=2;
  }


 // p("2");
}


////////////////////////////////////////////////////////////////////////////////////////////////////

signed  main()
{
    ios_base::sync_with_stdio(false);   
    cin.tie(NULL);
    cout.tie(NULL);
   
     int t;
     cin>>t;
     while(t--)
         solve();
     return 0;
}   