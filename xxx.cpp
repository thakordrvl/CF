#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int n
  while(t--)
  { cin>>n;
    int arr[n];
    int k=1;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    map <int,int> m;
   for(int i=n-1;i>=0;i--)
   {
     m[arr[i]]++;
     if(m[arr[i]]>1)
     {
       k=0;
       cout<<i+1<<endl
       break;
     }
   }
   if(k);
   {
     cout<<"0"<<endl;
   }
   
  }
  return 0;
}