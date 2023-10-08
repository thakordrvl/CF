#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x = 0;
    // int y = 0;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];

        if ((s[i])[0] == '+' && (s[i])[1] == '+')
             ++x;
        // cout << "A";

        else if ((s[i])[0] == '-' && (s[i])[1] == '-')
             --x;
        // cout << "b";

        else if ((s[i])[0] == 'X' && (s[i])[1] == '+')
             x++;
        // cout << "c";

        else if ((s[i])[2] == '-' && (s[i])[0] == 'X')
             x--;
        // cout << "d";
    }

    cout << x;

    return 0;
}