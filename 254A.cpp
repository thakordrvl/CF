#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define f(i, a, b) for (int i = a; i <= b; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen(input.txt,r,stdin); put double comma
    // freopen(output.txt,w,stdout);
    int n;
    cin >> n;
    n = 2 * n;
    int x;

    vector <pair<int, int>> p;
    unordered_map<int, int> c;

    for (int i = 0; i < n; i++)
    {
        cin>>x;
        p.push_back({x,i});
        c[x]++;
    }

    for (auto it : c)
        if (it.second & 1)
        {
            cout << -1 << endl;
            return 0;
        }

    sort(p.begin(), p.end());
    reverse(p.begin(),p.end());

    for (int i = 0; i < n; i += 2)
    {
        cout << p[i].second + 1 << " " << p[i + 1].second + 1 << endl;
    }

    return 0;
}