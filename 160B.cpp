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
    string s;
    cin >> s;
    int m = s.size();

    

    bool flag = false;
    int start = static_cast<int>(s[0]);
    int end = static_cast<int>(s[m-1]);

    if (start > end)
        flag = true;

    if (flag)
    {

        for (int i = 0; i < m / 2; i++)
        {

            start = static_cast<int>(s[i]);
            end = static_cast<int>(s[m-i-1]);

            if (start <= end)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    else
    {
        for (int i = 0; i < m / 2; i++)
        {

            start = static_cast<int>(s[i]);
            end = static_cast<int>(s[m-i-1]);

            if (start >= end)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}