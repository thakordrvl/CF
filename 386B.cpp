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

    int n, m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    vector<int> ans(n,0);
    // ans.push_back(0);
    reverse(arr1, arr1+n);
    unordered_set<int> s;
    for (int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
        ans[i]=s.size();
    }

    reverse(ans.begin(), ans.end());

    for (auto it : arr2)
    {
        cout << ans[it-1] << endl;
    }

    return 0;
}