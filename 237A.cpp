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

    int n;
    cin >> n;
    int x, y;
    int ans = 1;
    map<pair<int, int>, int> vis;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        vis[{x, y}]++;

        ans = max(ans, vis[{x, y}]);
    }

    cout << ans << endl;

    return 0;
}