#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define f(i,a,b) for(int i=a;i<b;i++)

void solve() {
    // Your code goes here
    int n;
        cin>>n;
        int x;
        cin>>x;
        int arr[n];
        int arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr2[i]=arr[i];
        }
        int i=n-1-(x-2)-1;
        int j=x-2+1;
        sort(arr2,arr2+n);
        int check=1;
        for(;i<=j;i++){
            if(arr[i]!=arr2[i]){
                check=0;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        } 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}