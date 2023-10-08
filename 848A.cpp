#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int flag=0;
    int ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    for(int i=0;i<n-1;i++){

        if(arr[i]==-1 && arr[i+1]==-1){
            ans=sum+4;
            flag=1;
            break;
        }
    }

    if(flag)
        cout<<ans<<endl;
    
    else if(sum<n)
        cout<<sum<<endl;
    
    else
        cout<<sum-4<<endl;
    

    }

    return 0;
}