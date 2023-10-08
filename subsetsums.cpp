#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

ll ts(ll arr[],ll target,int i){

    if(target<0)
        return 0;

    if(i<0)
        return 0;

    if(target==0)
        return 1;

    if(arr[i]<=target){
        return ts(arr,target-arr[i],i-1)+ts(arr,target,i-1);
    }

    else
        return ts(arr,target,i-1);

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);
    int n;
    cin>>n;
    ll a;
    cin>>a;
    ll b;
    cin>>b;
    ll dp[n][];


    
    return 0;
}