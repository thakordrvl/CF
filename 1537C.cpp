#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;


void solve(){

    ll n;
    cin >> n;

    vector<int> arr(n);
    vector<int> ans;

    for(int i=0;i<n;i++)    
        cin >> arr[i];

    int mind = INT_MAX;
    int first=0,second=n-1;
    sort(arr.begin(),arr.end());

    if(n==2){
        
        for(auto it : arr)
            cout << it << " ";

        cout << endl;

        return ;
    }

    for(int i=1;i<n;i++){

        if(arr[i]-arr[i-1]<mind){
            first = i-1;
            second = i;
            mind = arr[i]-arr[i-1];
        }
    }

    // cout << "first :" << first << " second : " << second << endl; 

    for(int i=second;i<n;i++)
        ans.push_back(arr[i]);

    for(int i=0;i<=first;i++)
        ans.push_back(arr[i]);

    for(auto it : ans)
        cout << it << " ";

    cout << endl;

}



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);
    
    ll t;
    cin >> t;

    while(t--){
        solve();
    }

   return 0;
}