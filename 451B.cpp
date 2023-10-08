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
    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // arr2[i] = arr[i];
    }

    int count = 0;

    int index1 = 1;
    int index2 = 1;
    bool flag = false;

    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] > arr[i + 1])
        {

            if (flag)
            {
                cout << "no" << endl;
                return 0;
            }

            flag = true;

            index1 = i;
            index2 = i + 1;

            while ((arr[index1] > arr[index2]) and index2 < n)
                index2++;

            index1 = index1 + 1;

            i = index2 - 1;
        }
    }

    reverse(arr + index1 - 1, arr + index2);

    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;
    cout << index1 <<" "<< index2 << endl;
}