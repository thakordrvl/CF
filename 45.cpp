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
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;
    int b[m];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int max = 0;
    int maxcount = 0;

    for (int j = 0; j < m; j++)
        for (int i = 0; i < n; i++)
        {
            if (b[j] % a[i] == 0)
            {

                if ((b[j] / a[i]) > max)
                {
                    max = (b[j] / a[i]);
                    maxcount = 1;
                }

                else if ((b[j] / a[i]) == max)
                    maxcount++;
            }
        }
    cout << maxcount;

    return 0;
}