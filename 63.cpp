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
    string s;
    cin >> s;
    map<char, int> m;
    int n = s.length();

    for (auto it : s)
        m[it]++;

    for (auto it : m.begin(); it != m.end(); it++)
        cout << it->first << it->second << endl;
    return 0;
}