#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int dp(int length, int arr[], int n, int bp[])
{

    if (length <= 0 && n >= 0)
        return 0;

    if (bp[length] != -1)
        return bp[length];

    if (length >= arr[n])
        bp[length] = max((1 + dp(length - arr[n], arr, n, bp),max(1 + dp(length - arr[n], arr, n - 1, bp), dp(length, arr, n - 1, bp)));

    else
        bp[length] = dp(length, arr, n - 1, bp);

    return bp[length];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen(input.txt,r,stdin); put double comma
    // freopen(output.txt,w,stdout);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int bp[n];
    memset(bp, -1, sizeof(bp));
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    // sort(arr, arr + 3);

    cout << dp(n, arr, 2, bp) << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     long long int a, b, c, n, p, ans, remainder;
//     while (cin >> n >> a >> b >> c)
//     {
//         ans = 0;
//         for (int i = 0; i * a <= n; ++i)
//         {
//             for (int j = 0; i * a + j * b <= n; ++j)
//             {
//                 remainder = n - i * a - j * b;
//                 if (remainder % c == 0)
//                 {
//                     p = remainder / c;
//                     ans = max(ans, i + j + p);
//                 }
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }