#include <iostream>
using namespace std;
int main()
{
    int n,min,order,c,i;
    bool flag;
    while(cin>>n>>c)
    {
        min=c;
        order=1;
        flag=true;//这个标志是关键
        for(i=2;i<=n;i++)
        {
            cin>>c;
            if(c<min)
            {
                min=c;
                order=i;
                if(!flag) flag=true;
            }
            else if(c==min) flag=false;
        }
        if(flag) cout<<order<<endl;
        else cout<<"Still Rozdil"<<endl;
    }
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

//     ll n;
//     pair<int, int> p[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> p[i].first;
//         p[i].second = i + 1;
//     }

//     sort(p, p + n);

//     for (int i = 0; i < n; i++)
//     {
//         if (p[i].first == p[i + 1].first)
//         {
//             cout << "Still Rozdil";
//             return 0;
//         }
//     }

//     cout << p[0].first;

//     return 0;
// }