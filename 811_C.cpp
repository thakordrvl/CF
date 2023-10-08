#include <bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin >> t;
    int k = 0;
    int n;

    while (t--)
    {

        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cout << "fuck off";
            cin >> arr[i];
        }

        map<int, int> m;

        for (int i = n - 1; i > 0; i--)
        {
            m[arr[i]]++;

            if (m[arr[i]] > 1)
            {
                cout << i + 1;
                break;
            }
        }
    }
    return 0;
}