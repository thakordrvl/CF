#include <bits/stdc++.h>
using namespace std;
int main()
{
    //   vector<int> v= {2,22,3};
    //   v.push_back(2);
    //   for(auto x : v)
    //      cout<<x<<endl;
       
    //    sort(v.begin(),v.end());
    //    for(auto x : v)
    //    cout<<x<<endl;
int n;

cin>>n;
int a[n];

// vector<int> v;

for(int i=0;i<n;i++)
{
  cin>>a[i];
//   v.push_back(a[i]);
}

// sort(v.begin(),v.end());

// for(auto x : v)
//    cout<<x<<endl;
for(int i=0; i<n;i++)
  cout<<a[i];


sort(a,a+n);
for(int i=0; i<n;i++)
  cout<<a[i]<<endl;

 return 0;
}