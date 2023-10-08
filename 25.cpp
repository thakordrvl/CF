#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n;
    cin >> k;
    cin >> l;
    cin >> c;
    cin >> d;
    cin >> p;
    cin >> nl;
    cin >> np;

    int maxnl = (k * l) / nl;
    int maxslices = c * d;
    int maxsalt = p / np;

    int nn = min(maxnl, maxslices);
    nn = min(nn, maxsalt);

    cout << nn/n;

    return 0;
}