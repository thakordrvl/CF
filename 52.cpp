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
    string s;
    cin >> s;
    int count1 = 0, count0 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            count0 = 0;
            count1++;
            if (count1 == 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            count1 = 0;
            count0++;
            if (count0 == 7)
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
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
//     string s;
//     cin >> s;

//     if(s.find)

//     return 0;
// }