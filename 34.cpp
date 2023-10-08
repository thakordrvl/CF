#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[7];
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    int rem = n;
    // int rem = n % sum;

    // if (n <= sum || sum == 1)
    // {
    //     rem = n;
    // }
    while (rem)
    {

        for (int i = 0; i < 7; i++)
        {
            rem = rem - arr[i];
            if (rem <= 0)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
    return 0;
}