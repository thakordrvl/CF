#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==s[i+1])
        {   
            count++;
        }
    }
cout<<count<<endl;
    return 0;
}