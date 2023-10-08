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
    vector<int> v;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            v.push_back(s[i]);
            count++;
        }
    }
    count--;

    sort(v.begin(), v.end());

    for (auto it : v)
    {
        cout << (it % 49) + 1;
        if (count)
        {
            count--;
            cout << "+";
        }
    }

    return 0;
}