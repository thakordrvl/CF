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

        if (n % 2 == 0)
        {
            cout << "YES"<<endl;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    cout << 1 << " ";

                else
                    cout << -1 << " ";
            }
        }

        else
        {
            if (n == 3)
                cout << "NO"<<endl;

            else
            {
                cout << "YES"<<endl;
                int a = (n - 3) / 2;

                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                    {
                        cout << -1*a << " ";
                    }
                    else
                    {
                        cout << a+1 << " ";
                    }
                }
            }
        }
    }

    return 0;
}