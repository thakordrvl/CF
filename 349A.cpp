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

    int n;
    cin >> n;

    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (arr[0] > 25)
    {
        cout << "NO" << endl;
        return 0;
    }

    int sum = 25;

    for (int i = 1; i < n; i++)
    {

        if (arr[i] == 25)
        {
            sum += 25;
        }

        else if (arr[i] == 50)
        {

            if (sum < 25)
            {
                cout << "NO" << endl;
                return 0;
            }

            sum += 25;
        }

        else
        {

            if (sum < 75)
            {
                cout << "NO" << endl;
                return 0;
            }

            sum += 25;
        }
    }

    cout << "YES" << endl;

    return 0;
}