#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    int a, b, c;
    cin >> a >> b >> c;
    sum += sqrt((a * c) / b);
    sum += sqrt((a * b) / c);
    sum += sqrt((b * c) / a);
    cout << 4 * sum;
    return 0;
}