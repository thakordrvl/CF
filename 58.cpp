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

    string h = "hello";
    int j = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (h[j] == s[i])
        {
            j++;
            if (j == 5)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}