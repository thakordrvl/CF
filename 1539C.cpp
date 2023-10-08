#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;



void solve(){

    ll n,k,x;
    cin >> n >> k >> x;
    ll arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    sort(arr,arr+n);

    // for(auto it : arr)
    //     cout << it << " ";

    // cout << endl;

    vector<ll> ans;

    for(int i=0;i<n-1;i++){

        if(arr[i+1]-arr[i]<=x) 
            continue;

        ans.push_back((arr[i+1]-arr[i]-1)/x);

        // cout << "req :" << req << endl;

        // cout << i << " " << i+1 <

        // cout << "count : " << count << endl;
        
    }

    sort(ans.begin(),ans.end());

    ll cnt = 0;

    for(auto it : ans){
        if(it<=k){
            k-=it;
            cnt++;
        }
        else
            break;
    }

    cout << ans.size()-cnt+1 << endl;
}



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);
    
    solve();
    return 0;
}