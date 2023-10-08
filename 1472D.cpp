#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define f(i,a,b) for(int i=a;i<b;i++)


void solve() {
    
    // Your code goes here
    ll n;
    cin >> n;
    vector<int> arr(n);
    priority_queue<int> even;
    priority_queue<int> odd;

    int i=0;

    for(i=0;i<n;i++){

        cin >> arr[i];

        if(arr[i]&1)
            odd.push(arr[i]);
        else    
            even.push(arr[i]);
    }

    ll alice = 0;
    ll bob = 0;
    ll count = 0;

    while(even.size() && odd.size()){

        if(even.top() >= odd.top()){
            alice += even.top();
            even.pop();
        }

        else
            odd.pop();

        count++;

        if(!even.size() || !odd.size())
            break;

        if(even.top() <= odd.top()){
            bob += odd.top();
            odd.pop();
        }

        else
            even.pop();

        count++;
    }

    while(even.size()){

        if(count&1){
            even.pop();
            count = 0;
        }   

        if(even.size()){
            alice += even.top();
            even.pop();

            if(even.size())
                even.pop();
        }
    }

    while(odd.size()){

        if(count%2==0){
            odd.pop();
            count = 1;
        }

        if(odd.size()){
            bob += odd.top();
            odd.pop();

            if(odd.size())
                odd.pop();
        }
    }

    if(alice>bob)
        cout << "Alice" << endl;

    else if(bob>alice)
        cout << "Bob" << endl;

    else    
        cout << "Tie" << endl;    
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