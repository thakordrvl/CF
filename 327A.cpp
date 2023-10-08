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
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count1 = 0;
    int count0 = 0;
    int zero = 0;
    int zeromax = -1;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 1)
        {
            count1++;
            if (count0 > 0)
                count0--;
        }

        else
        {
            count0++;
            zeromax = max(count0, zeromax);
        }
    }

    cout << count1 + zeromax << endl;

    return 0;
}