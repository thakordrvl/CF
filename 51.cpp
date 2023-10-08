#include <iostream>
using namespace std;
 
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n - a, b + 1) << endl;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n, a, b;
//     cin >> n >> a >> b;
//     cout << n - a;
//     return 0;
// }

// for (int j = n - b; j < n; j++)
//     for (int i = a; i < j; i++)
//         count += j - i - 1;

// while (n - a > 0)
// {
//     count += (((n - a) * (n - a + 1)) / 2);
//     a++;
// }

// freopen(input.txt,r,stdin); put double comma
// freopen(output.txt,w,stdout);