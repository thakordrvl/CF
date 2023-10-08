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
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'A' && s[i] != 'O' && s[i] != 'Y' && s[i] != 'E' && s[i] != 'I' && s[i] != 'U' && s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i')
            ans.push_back(s[i]);
    }

    for (int i = 0; i < ans.length(); i++)
    {
        if (isupper(ans[i]))
        {
            ans[i] = ans[i] + 32;
        }
    }

    for (auto it : ans)
        cout << "." << it;

    return 0;
}