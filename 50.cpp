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
    int k;
    cin >> k;
    string s;
    cin >> s;
    map<char, int> m;
    int n = s.length();

    for (int i = 0; i < n; i++)
        m[s[i]]++;

    for (int i = 0; i < n; i++)
        if (m[s[i]] % k != 0)
        {
            cout << "-1";
            return 0;
        }

    int x = k;
    while (k--)
        for (auto pair : m)
        {
        
            for (int i = 0; i < (pair.second) / x; i++)
            {
                cout << pair.first;
            }
        }

    return 0;
}