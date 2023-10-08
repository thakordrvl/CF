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

    string s, ans = "";
    cin >> s;
    int n = s.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 2 and s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B')
        {
            i += 2;
            cout << ans << " ";
            ans = "";
        }
        else
        {
            ans += s[i];
        }
    }
    cout << ans;

    return 0;
}
