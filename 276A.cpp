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
    int joy=INT_MIN;
    int a,b;
    vector<pair<int, int>> v(n, {0, 0});

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;

        if (k > v[i].second)
            joy = max(joy, v[i].first);

        else
        {
            joy = max(joy, v[i].first - (v[i].second - k));
        }
    }

    cout << joy << endl;

    return 0;
}