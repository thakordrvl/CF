#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);
vector<int> v;
int count=0;
ll n;
ll x,y;
 
cin>>n;
cin>>y;
v.push_back(y);

for(int i=1;i<n;i++)
{
   cin>>x;
   if(x> *max_element(v.begin(),v.end()) || x<*min_element(v.begin(),v.end()))
   {
     count++;
   }
   v.push_back(x);
}
cout<<count;
    
    return 0;
}