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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int countL = 0, countR = 0;
        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                if (s[i + 1] == 'L')
                {
                    cout << "0" << endl;
                    flag = 0;
                    break;
                }
            }

            else
            {
                if (s[i + 1] == 'R')
                {
                    cout << i + 1 << endl;
                    flag = 0;
                    break;
                }
            }
        }

        if (flag)
            cout << "-1" << endl;
    }

    return 0;
}