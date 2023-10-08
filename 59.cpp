#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// int maxx(int *z, int m, vector *vmax)
// {
//     int max = 0;
//     int i = 0;
//     reverse(vmax.begin(), vmax.end());
//     while (z && i < m)
//     {
//         while (vmax[i] >= vmax[i + 1])
//         {
//             max += vmax[i];
//             vmax[i]--;
//             z--;
//         }
//         i++;
//     }

//     if (z)
//     {
//         maxx(&z, vmax);
//     }

//     return max;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen(input.txt,r,stdin); put double comma
    // freopen(output.txt,w,stdout);

    int n, m;
    cin >> n >> m;
    vector<int> v;
    int x;

    for (int i = 0; i < m; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    int min = 0;
    int max = 0;
    int y = n;
    int z = n;

    sort(v.begin(), v.end());
    for (int i = 0; i < m && y != 0; i++)
    {
        int c = v[i];
        while (c != 0 && y != 0)
        {
            min += c;
            c--;
            y--;
        }
    }
    int i = 0;

    while (z)
    {
        // while (vmax[i] >= vmax[i + 1])
        // {
        //     max += vmax[i];
        //     vmax[i]--;
        //     z--;
        // }
        // i++;

        // if (i == m)
        // {
        //     i = 0;
        // }
        max += v[m - 1];
        v[m - 1]--;
        z--;
        sort(v.begin(), v.end());
    }

    cout << max << " " << min;

    return 0;
}