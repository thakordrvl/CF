#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);
     
     int n,m;
     cin>>n>>m;
     int good[n];
     int bad[m];
     int maxi=INT_MIN;
     int mini=INT_MAX;

     for(int i=0;i<n;i++){

        cin>>good[i];

        if(good[i]>maxi)
            maxi=good[i];

        if(good[i]<mini)
            mini=good[i];

     }

     if(2*mini>=maxi)
        maxi=2*mini;

     if(mini==maxi)
        maxi*=2;

     for(int i=0;i<m;i++){

        cin>> bad[i];

        if(bad[i]<=maxi){
            cout<<-1<<endl;
            return 0;
        }
     }

    

    if(2*mini<=maxi)
        cout<<maxi<<endl;
     
    else
        cout<<-1<<endl;







    return 0;
}