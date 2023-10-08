#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <vector>
#include <string>
#define INF 0x3f3f3f3f
#define eps 1e-8
#define MAXN (2100+10)
#define MAXM (200000+10)
#define Ri(a) scanf("%d", &a)
#define Rl(a) scanf("%lld", &a)
#define Rf(a) scanf("%lf", &a)
#define Rs(a) scanf("%s", a)
#define Pi(a) printf("%d\n", (a))
#define Pf(a) printf("%.2lf\n", (a))
#define Pl(a) printf("%lld\n", (a))
#define Ps(a) printf("%s\n", (a))
#define W(a) while(a--)
#define CLR(a, b) memset(a, (b), sizeof(a))
#define MOD 10007
#define LL long long
#define lson o<<1, l, mid
#define rson o<<1|1, mid+1, r
#define ll o<<1
#define rr o<<1|1
#define PI acos(-1.0)
using namespace std;
int a[20];
int main()
{
    int n; Ri(n);
    for(int i = 0; i < 12; i++)
        Ri(a[i]);
    sort(a, a+12);
    int cnt = 0; bool flag = false;
    for(int i = 11; i >= 0; i--)
    {
        if(n <= 0)
        {
            flag = true;
            break;
        }
        cnt++; n -= a[i];
    }
    if(n <= 0)
        flag = true;
    printf(flag ? "%d\n" : "-1\n", cnt);
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     // freopen(input.txt,r,stdin); put double comma
//     // freopen(output.txt,w,stdout);
//     int k;
//     cin >> k;
//     int a[12];

//     for (int i = 0; i < 12; i++)
//         cin >> a[i];

//     sort(a, a + 12, greater<int>());
//     int sum = 0;
//     int i = 0;
//     while (sum < k)
//     {
//         sum += a[i];
//         i++;
//     }

//     if (i <= 12)
//         cout << i;

//     else
//         cout << "-1";

//     return 0;
// }