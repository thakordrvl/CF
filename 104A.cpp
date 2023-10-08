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
    if (n <= 10)
    {
        cout << 0 << endl;
    }
    else
    {
        int aa = n - 10;
        if (aa == 1)
        {
            cout << 4 << endl;
        }
        else if (aa == 11)
        {
            cout << 4 << endl;
        }
        else if (aa == 10)
        {
            cout << 15 << endl;
        }
        else if (aa > 10)
        {
            cout << 0 << endl;
        }

        else
        {
            cout << 4 << endl;
        }
    }
    return 0;
}