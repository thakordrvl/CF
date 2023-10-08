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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i <= n / 2; i++)
        {
            if (s[i] != s[n - i])
                flag = false;

        }
        if (flag)
            cout << "yes" << endl;

        else{

            for(int i=0;i<n/;i++){

                if(s[])













            }








        }
    }
    return 0;
}