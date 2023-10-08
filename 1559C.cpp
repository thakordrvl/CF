#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;


void solve(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    if(arr[0]==1){

        cout << n+1 << " ";

        for(int i=1;i<=n;i++)
            cout << i << " ";
    }


    else if(arr[n-1]==0){

        for(int i=1;i<=n+1;i++)
            cout << i << " ";
    }


    else{

        int ind = 0;

        for(ind=0;ind<n-1;ind++){
            if(arr[ind]!=arr[ind+1])
                break;
        }

        ind++;

        for(int i=1;i<=ind;i++)
            cout << i << " ";

        cout << n + 1 << " ";

        for(int i=ind+1;i<=n;i++)
            cout << i << " ";

    }

    cout << endl;
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