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
    pair<int, int> a[n];
    vector<pair<int, int>> v;
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
        m[a[i].first]++;
    }

    sort(a, a + n);

    int flag;
    for (int i = 0; i < n; i++)
    {
        if (m[a[i].first] == 1)
        {
            v.push_back({a[i].first, 0});
        }

        else
        {
            flag = 1;
            int diff = a[i + 1].second - a[i].second;
            for (; i < i + m[a[i].first] - 1; i++)
            {
                if (a[i + 1].second - a[i].second != diff)
                {
                    flag = 0;
                }
            }

            if (flag)
                v.push_back({a[i].first, diff});

            i++;
        }
    }

    cout << v.size() << endl;

    for (auto it : v)
        cout << it.first << " " << it.second << endl;
    return 0;
}