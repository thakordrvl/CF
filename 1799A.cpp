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
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        int x;
        cin >> n >> m;
        unordered_map<int, int> map;
        vector<int> v;
        int count = 0;

        for (int i = 0; i < m; i++)
        {
            cin >> x;
            map[x]++;
            count++;

            if (map[x] == 1 && v.size()<n)
            {
                v.push_back(count);
            }
        }

        while (v.size() < n)
        {
            v.push_back(-1);
        }

        reverse(v.begin(), v.end());

        for (auto it : v)
            cout << it << " ";

        cout << endl;
    }
    return 0;
}