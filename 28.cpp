#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int a[n][3];

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }

        if (accumulate(a[i],a[i]+3)>1)
            count++;

        
    }
    return 0;
}