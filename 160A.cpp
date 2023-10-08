#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen("input.txt" , "r" , stdin);
//freopen("output.txt" , "w" , stdout);
    
    int n;
    cin>>n;
 
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
 
    sort(arr,arr+n,greater<int>());
 
    int sum = 0;
 
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum > (accumulate(arr,arr+n,0)-sum)){
            cout<<i+1<<endl;
            return 0;
        }
        
    }
    return 0;
}