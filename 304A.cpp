#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define f(i, a, n) for (int i = a; i <= n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen(input.txt,r,stdin); put double comma
    // freopen(output.txt,w,stdout);

    int n;
    cin >> n;

    int ans = 0;

    f(i, 1, n)
    {
        f(j, i + 1, n)
        {

            double c = i * i + j * j;
            c = sqrt(c);

            if (floor(c) == c && c <= n)
                ans++;
        }
    }

    cout << ans << endl;

    return 0;
}