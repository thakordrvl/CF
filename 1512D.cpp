#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    // Your code goes here

    ll n;
    cin >> n;
    
    vector<ll> b(n+2);
    ll sum = 0;

    unordered_map<ll,ll> m;

    for(int i=0;i<n+2;i++){
        cin >> b[i];
        sum += b[i];
        m[b[i]]++;
    }

    sort(b.begin(),b.end());

    for(int i=0;i<n+2;i++){

        ll rem = sum - b[i];

        if(rem&1) 
            continue;

        if(m.find(rem/2)==m.end())
            continue;

        if(rem/2==b[i] && m[b[i]]==1) continue;

        // cout << i << endl;

        rem = rem/2;

        m[rem]--;
        m[b[i]]--;

        for(auto it : b){
            if(m[it]){
                cout << it << " ";
                m[it]--;
            }
        }

        cout << endl;
        return;
    }


    cout << -1 << endl;
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