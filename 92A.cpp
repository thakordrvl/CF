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
    int n, m;
    cin >> n >> m;
    int count = m;

    for (int i = 1; i <= n; i++)
    {
        if (count >= i)
            count -= i;

        else
        {
            cout << count << endl;
            break;
        }

        i = i % n;
    }

    return 0;
}