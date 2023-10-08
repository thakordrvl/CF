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

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        bool flag = true;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int k = 2;
        int count;

        while (k < n)
        {

            for (int i = 0; i < n; i++)
            {

                count = 0;

                if (arr[i] % k == 0)
                    count++;
            }

            if (count > k)
            {
                cout << "no" << endl;
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "yes" << endl;
    }

    return 0;
}