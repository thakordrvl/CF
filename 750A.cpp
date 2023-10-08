#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);
    
    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    arr[0]=5;
    for(int i=1;i<n;i++)
        arr[i]=arr[i-1] + 5*(i+1);



    int time=240-k;

    int left=0;
    int right=n-1;
    int ans=0;
    int mid;
    

    while(left<=right){

         mid=left+(right-left)/2;

        if(arr[mid]<=time){
            ans=mid+1;
            left=mid+1;
        }

        else
            right=mid-1;

    }

    cout<<ans;









    return 0;
}