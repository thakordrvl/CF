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

    int n, m, d;

    cin >> n >> m >> d;

    int sum = 0;

    int arr[n][m];
    unordered_set<int> s;
    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            s.insert(arr[i][j]);
            sum += arr[n][m];
        }

    // if (sum % d != 0)
    // {
    //     cout << -1 << endl;
    //     return 0;
    // }

    for (auto it : s)
    {

        int count = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (abs(it - arr[i][j]) % d != 0){
                    cout << -1 << endl;
                    return 0;
                }

                count += (abs(it - arr[i][j]) / d);
            }

        ans = min(ans, count);
    }

    cout << ans << endl;

    return 0;
}