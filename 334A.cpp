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
    int size = n * n;
    int sum = 0;

    for (int i = 1; i <= size; i++)
        sum += i;

    sum = sum / n;
    int count = 0;
    for (int i = 1; i <= size/2; i++)
    {
        cout << i << " " << size - i + 1<<" ";
        count++;
        if (count % (n/2) == 0)
            cout << endl;
    }

    return 0;
}   