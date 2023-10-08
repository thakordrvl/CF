#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max = 0;
    int cpass=0;
    int n, i;
    cin >> n;
    i = 0;
    pair<int, int> a[n];
    
    while (i < n)
    {
        cin >> a[i].first >> a[i].second;
        cpass += a[i].second - a[i].first;
        if (cpass > max)
        {
            max = cpass;
        }
        i++;
    }
    cout << max;

    return 0;
}