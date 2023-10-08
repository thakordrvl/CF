#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 

    ll n, m;
    ll sum = 0;
    cin >> n >> m;

    ll hou[100001];

  
    ll cp = 1;

    ll newp;

    while (m--)
    {
        cin >> newp;

        if (newp > cp)
        {
            sum += newp - cp;
            cp = newp;
        }
        else if (cp > newp)
        {
            sum += n - (cp - newp);
            cp = newp;
        }
    }

    cout << sum;

    return 0;
}

// int i = 0;
// while (i < m)
// {
//     if (hou[i] > cp)
//     {
//         sum += hou[i] - cp;
//         cp = hou[i];
//     }
//     else if (cp > hou[i])
//     {
//         sum += n - (cp - hou[i]);
//         cp = hou[i];
//     }

//     i++;
// }

  // for (int i = 0; i < m; i++)
    //     cin >> hou[i];
   // freopen(input.txt,r,stdin); put double comma
    // freopen(output.txt,w,stdout);