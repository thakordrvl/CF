#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, n1, n2, n3, n4;
    cin >> n;
    while (true)
    {
        n++;
        n1 = n % 10;
        n2 = (n / 10) % 10;
        n3 = (n / 100) % 10;
        n4 = (n / 1000) % 10;
        if (n1 != n2 && n2 != n3 && n3 != n4 && n4 != n1 && n1 != n3 && n4 != n2)
        {
            cout << n4 << n3 << n2 << n1 << endl;
            break;
        }
    }

    return 0;
}
