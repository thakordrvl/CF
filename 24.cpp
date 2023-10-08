#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3, s4;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    s4 = s1.append(s2);

    sort(s3.begin(), s3.end());
    sort(s4.begin(), s4.end());

    if (s3 == s4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    // if (s4 == s3)
    // {
    //     cout << "YES";
    // }
    // int i=0;
    // do
    // {
    //     next_permutation(s4.begin(), s4.end());
    //     i++;
    // } while (s4 != s3 && i<s4.length());

    // if (s4 == s3)
    //     cout << "YES";
    // else{
    //     cout<<"NO";
    // }

    return 0;
}