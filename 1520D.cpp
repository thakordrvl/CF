#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;


void solve(){

    ll n;
    cin >> n;
    ll arr[n];
    ll count = 0;

    for(int i=0;i<n;i++)
        cin >> arr[i];

    unordered_map<ll,ll> m;

    for(int i=0;i<n;i++){

        ll val = arr[i]-i;

        if(m[val])
            count+= m[val];
        
        m[val]++;
    }
    cout << count << endl;
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