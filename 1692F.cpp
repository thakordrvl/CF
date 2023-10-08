#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ulli unsigned long long int
#define f(i,l,n) for(int i=l;i<n;i++)
#define r(i,l,n) for(int i=l;i>=n;i--)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define push(x) push_back(x)
#define pmo cout<<"-1"<<endl
#define p(x) cout<<x<<endl


typedef vector<int> vi;

void solve()
{
  int n;
  cin>>n;
  int a[n];
  map<int,int> m;
  f(i,0,n)
  {
    cin>>a[i];
    int temp=a[i]%10;
    m[temp]++;
  }
  f(i,0,10)
  { 
    
    if(m[i]==0) continue;
    
    int l1=i;
    int l2=i+18;
    f(j,l1,l2+1)
    {
      if(j%10 == 3)
      {
        int temp=j-i;
        int k1=0;
        int k2=temp;
        while(k2!=0)
        {
          if(k1==k2 && k1==i)
          {
            if(m[k1]>=3)
            {
              py;
            //  cout<<k1<<" "<<k2<<" "<<i<<endl;
              return;
            }
          }
          if(k1==k2 && k1!=i)
          {
             if(m[k1]>=2)
            {
              py;
             //  cout<<k1<<" "<<k2<<" "<<i<<endl;
              return;
            }
          }
          if(k1==i && i!=k2)
          {
             if(m[k1]>=2 && m[k2]!=0)
            {
              py;
            //   cout<<k1<<" "<<k2<<" "<<i<<endl;
              return;
            }
          }
           if(k2==i && i!=k1)
          {
             if(m[k2]>=2 && m[k1]!=0)
            {
              py;
           //    cout<<k1<<" "<<k2<<" "<<i<<endl;
              return;
            }
          }
          if(k1!=k2 && k1!=i && k2!=i)
          {
            if(m[k1]!=0 && m[k2]!=0 && m[i]!=0)
            {
              py;
            //   cout<<k1<<" "<<k2<<" "<<i<<endl;
              return;
            }
          }
          k1++;
          k2--;
        }
      }
    }
    
  }
  pn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}