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
    int n, k;
    cin >> n >> k;
   
    vector<int> v;
    for(int i=1;i<=n;i++)
        v.push_back(i);

    reverse(v.begin(),v.begin()+k+1);

    for(auto it:v)
        cout<<it<<" ";
    
    return 0;
}