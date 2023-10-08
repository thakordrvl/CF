//4263447   Aug 11, 2013 5:48:07 AM 	fuwutu 	227B - Effective Approach 	GNU C++0x 	Accepted 	92 ms 	400 KB
#include <cstdio>

int main()
{
    int n, a, index[100001];
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a);
        index[a] = i;
    }

    int m, b;
    scanf("%d", &m);
    long long Vasya(0), Petya(0);
    while (m--)
    {
        scanf("%d", &b);
        Vasya += index[b];
        Petya += (n + 1 - index[b]);
    }
    printf("%I64d %I64d\n", Vasya, Petya);
    return 0;
}// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     int m;
//     int cpetya = 0;
//     int cvasya = 0;

//     cin >> n;
//     int x = 0;
//     int arr[100001];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         arr[x] = i;
//     }
//     int y;
//     cin >> m;
//     while (m--)
//     {
//         cin >> y;
//         cpetya = cpetya + arr[y] + 1;
//         cvasya = cvasya + n - arr[y];
//     }

//     cout << cpetya << " " << cvasya;

//     return 0;
// }

// // int index = find(a, a + n, arr[i]) - a;

// // for (int i = 0; i < m; i++)
// //     for (int j = 0; j < n; j++)
// //     {
// //         if (arr[i] == a[j])
// //             cvasya = cvasya + (j + 1);
// //     }

// // for (int i = 0; i < m; i++)
// //     for (int j = n - 1; j >= 0; j--)
// //     {
// //         if (arr[i] == a[j])
// //             cpetya = cpetya + (n - j);
// //     }
// // int arr[m];

// // for (int j = 0; j < m; j++)
// // {
// //     cin >> arr[j];
// //     cpetya = cpetya + mm[arr[j]] ;
// //     cvasya = cvasya + (n+1 - mm[arr[j]]);
// // }
