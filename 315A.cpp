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
    vector<pair<int, int>> v(n);
    unordered_set<int> s;
    unordered_set<int> s1;
    unordered_map<int, int> m;
    unordered_map<int, int> m1;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        m1[v[i].first]++;
    }

    for (auto it : v)
    {
        if (it.first != it.second)
            s.insert(it.second);

        else
        {
            m[it.second]++;
        }
    }

    int count = 0;

    for (auto it : v)
    {
        if (s.find(it.first) != s.end())
            count++;

        else
        {

            if (m[it.first] > 1)
                count += (m1[it.first]);

            else if (m[it.first] == 1)
                count += (m1[it.first]-1);
        }
    }

    cout << n - count << endl;

    return 0;
}