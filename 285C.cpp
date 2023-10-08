#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen(input.txt,r,stdin); put double comma
    // freopen(output.txt,w,stdout);

    ll n;
    cin >> n;
    vector<ll> v(n, 0);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll count = 0;
    ll sum = 0;
    unordered_set<ll> s;


    for (ll i = 0; i < n; i++)
    {
        if (v[i] <= 0)
        {
            count += (abs(v[i])+1);
            v[i]=1;
        }

        if(v[i]>n){
            count+=(v[i]-n);
            v[i]=n;
        }

        s.insert(v[i]);

    }

    if(s.size()==n){
        cout<<count<<endl;
        return 0;
    }

    sort(v.begin(), v.end());

    for(ll i=1;i<=n;i++){
        count+=abs(v[i-1]-i);
    }


    cout<<count<<endl;



    return 0;
}


