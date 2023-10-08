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

    int a, b, c;

    cin >> a >> b >> c;

    int size = (a * b * c);
    int ans = 0;
    vector<int> arr(size+1,0);

    

    for (int i = 1; i <= size; i++)
    {
        for (int j = i; j <= size; j += i)
        {
            arr[j]++;
        }
    }

    for (int i = 1; i <= a; i++)
        for (int j = 1; j <= b; j++)
            for (int k = 1; k <= c; k++)
            {
                ans += arr[i * j * k];
                ans %= 1073741824;
            }

    cout << ans << endl;

    return 0;
}