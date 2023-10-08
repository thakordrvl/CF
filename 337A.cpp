#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int m;
    cin>>n>>m;

    int arr[m];

    for(int i=0;i<m;i++){
        cin>>arr[i];
    }


    sort(arr,arr+m);

    int ans=1001;

    for(int i=0;i<=m-n;i++){
        ans=min(ans,arr[i+n-1]-arr[i]);
    }

    cout<<ans;
    return 0;
}