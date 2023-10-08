#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;



void solve(){


    int n, k;
        cin >> n >> k;
        if (n % 2) cout << 1 << ' ' << n / 2 << ' ' << n / 2 << '\n';
        else if (n % 2 == 0 && n % 4) cout << 2 << ' ' << n / 2 - 1 << ' ' << n / 2  - 1 << '\n';
        else cout << n / 2 << ' ' << n / 4 << ' ' << n / 4 << '\n';
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
//freopen(input.txt,r,stdin); put double comma
//freopen(output.txt,w,stdout);
    


    ll t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}