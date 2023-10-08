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
    map<string, int> m;
    string s;

    while (n--)
    {
        cin >> s;
        m[s]++;
    }

    int max = 0;
    int nogoals;
    
    for (auto it = m.begin(); it != m.end(); it++)
    {
        nogoals = it->second;

        if (nogoals > max)
        {
            max = nogoals;
            s = it->first;
        }
    }

    cout << s;
    return 0;

}