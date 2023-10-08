#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


bool check(ll mid, ll h, vector<ll> &arr){

    ll sum = mid;

    for(int i=0;i<arr.size()-1;i++){
        sum += min(arr[i+1]-arr[i],mid);

        if(sum>=h)
            return true;

    }

    return sum>=h;
}

void solve() {
    // Your code goes here

    ll n,h;
    cin >> n >> h;
    vector<ll> arr(n);

    for(int i=0;i<n;i++)
        cin >> arr[i];


    ll low = 1;
    ll high = 1e18;
    while(low<=high){

        ll mid = (low + high)/2;

        if(check(mid,h,arr)){
            high = mid-1;// cout << "ans " << ans << "low : " << low << "high : " << high << endl;
        }

        else    
            low = mid+1;
    }

    cout << high + 1 << endl;
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