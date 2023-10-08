#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    // Your code goes here

    int n;
  cin>>n;
  int arr[n];
  unordered_map<double,int> m;
  double sum=0;
   ll count=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    sum+=arr[i];
    m[arr[i]]++;
  }
  double avg=sum/n;
  
    //cout<<avg<<endl;
   double k=2*avg;
     
    // cout<<k<<endl;
     for(int i=0;i<n;i++)
     {
       double temp=k-arr[i];
       if(m[temp]!=0)
       {
         if(temp==arr[i])
         {
           count=count+m[temp]-1;
         }
         else
         {
           count=count+m[temp];
         }
         m[arr[i]]--;
       }
     }
     cout<<count<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}