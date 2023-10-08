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
        int a;
        cin >> a;
        if (a < 60 || a > 120)
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
    }

    return 0;
}