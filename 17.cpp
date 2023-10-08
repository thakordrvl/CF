#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);
    int n,left=0,right=0;

    cin>>n;
    pair<int,int> v[n];
    for(int i=0;i<n;i++)
    {
       cin>>v[i].first>>v[i].second;

       if(v[i].first==1)
       {
        left++;
       }
       if(v[i].second==1)
       {
        right++;
       }
    }

    if(left>(n/2))
     left=n-left;

    if(right>(n/2))
     right=n-right;

    cout<<right+left<<endl ;

    return 0;
}