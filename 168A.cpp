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
    double n, x, y;

    cin >> n >> x >> y;

    double mini;
    mini = ceil((y * n) / 100);

    if (mini > x)
        cout << mini - x << endl;

    else
        cout << 0 << endl;
    return 0;
}